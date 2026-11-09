#include <iostream>
#include <limits>
#include <string>
#include <stdexcept>
#include <ctime>
#include <cstdlib>
#include "SudokuBoard.h"
#include "SudokuChecker.h"
#include "SudokuPuzzle.h"

int getIntegerInput(std::string prompt)
{
    std::string input;
    int number;

    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);

        try
        {
            number = std::stoi(input);
            return number;
        }

        catch (const std::invalid_argument&)
        {
            std::cout << "Invalid input. Please enter a number.\n";
        }
    }
}


int main()
{
    srand(static_cast<unsigned int>(time(0)));

    SudokuBoard board;

    SudokuChecker checker;

    SudokuPuzzle puzzle;

    int puzzleChoice = rand() % 2;
    puzzle.createPuzzle(board, puzzleChoice);
    
    std::cout << "Welcome to Sudoku Game.\n";
    std::cout << "Fill in the empty spaces using numbers 0 through 9.\n";
    std::cout << "Enter 0 to erase a number you have placed.\n";
    std::cout << "Each row, column, and 3x3 box must contain numbers 1 through 9 without repeats.\n";
    std::cout << "Original puzzle numbers cannot be changed.\n";

    int choice = 0;
    int row;
    int column;
    int number;


    do
    {
        std::cout << "\n==== SUDOKU GAME ====\n";
        std::cout << "1. View Sudoku Board\n";
        std::cout << "2. Enter or change a Number\n";
        std::cout << "3. Check Puzzle Status\n";
        std::cout << "4. Reset Puzzle\n";
        std::cout << "5. Exit Game\n";

        choice = getIntegerInput("Please select an option: ");

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << "Invalid input. Please enter a number. \n";
            continue;
        }

        if (choice == 1)
        {
            board.displayBoard();
        }

        else if (choice == 2)
        {
            std::cout << "\nRemember: Use numbers 1-9. No repeats in any row, column or 3x3 box.\n";
            std::cout << "Enter 0 to erase a number you have placed.\n\n";
           
            row = getIntegerInput("Enter row (1-9): ");
            
            while (row < 1 || row > 9)
            {
                std::cout << "Invalid row. Please enter a number 1-9.\n";
                row = getIntegerInput("Enter row (1-9): ");
            }
            
            column = getIntegerInput("Enter column (1-9): ");

            while (column < 1 || column > 9)
            {
                std::cout << "Invalid column. Please enter a number 1-9.\n";
                column = getIntegerInput("Enter column (1-9): ");
            }

            do
            {
                number = getIntegerInput("Enter number (0-9, 0 to erase): ");

                while (number < 0 || number > 9)
                {
                    std::cout << "Invalid number. Please enter a number 0-9.\n";
                    number = getIntegerInput("Enter number (0-9): ");
                }
            }

            while (number < 0 || number>9);            

            if (row < 1 || row > 9 || column < 1 || column > 9 || number < 0 || number > 9)
            {
                std::cout << "Invalid entry. Rows, columns, and numbers must be 0-9.\n";
            }

            else
            {
                row = row - 1;
                column = column - 1;

                if (puzzle.isFixed(row, column))
                {
                    std::cout << "You cannot change original number.\n";
                }
                
                else 
                {
                    if (number == 0)
                    {
                        board.setCell(row, column, number);
                        std::cout << "Your number has been erased.\n";
                    }

                    else
                    {
                        board.setCell(row, column, number);

                        if (checker.isValidMove(board, row, column, number))
                        {
                            std::cout << "Move accepted. No conflicts found.\n";
                        }

                        else
                        {
                            std::cout << "The Checker Assistant found a conflict.\n";
                        }
                    }
                    
                    if (puzzle.isPuzzleCompleted(board, checker))
                    {
                        std::cout << "COMPLETED!!! YAAAAYYYY!!!!\n";
                    }
                }                                              
            }
        }

        else if (choice == 3)
        {
            if (checker.isBoardCompleted(board))
            {
                std:: cout << "You solved the puzzle. Lets go!!!\n";
            }

            else
            {
                std::cout << "You are not done yet, keep going.\n";
            }
        }

        else if (choice == 4)
        {
            puzzle.createPuzzle(board, puzzleChoice);
            std::cout << "Puzzle has been reset.\n";
        }

        else if (choice == 5)
        {
            std::cout << "Thanks for playing.\n";
        }

        else
        {
            std::cout << "That option is not available. Please try again.\n";
        }
    }

    while (choice != 5);


    return 0;
}

