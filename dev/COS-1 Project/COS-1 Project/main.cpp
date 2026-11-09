#include <iostream>
#include <limits>
#include <string>
#include <stdexcept>
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
    SudokuBoard board;

    SudokuChecker checker;

    SudokuPuzzle puzzle;

    puzzle.createPuzzle(board);
    
    std::cout << "Welcome to Sudoku Game.\n";
    std::cout << "Fill in the empty spaces using numbers 1 through 9.\n";
    std::cout << "Each row, column, and 3x3 box must congtain numbers 1 through 9 without repeats.\n";
    std::cout << "Orignal puzzle numbers cannot be changed.\n";

    int choice = 0;
    int row;
    int col;
    int number;


    do
    {
        std::cout << "\n==== SUDOKU GAME ====\n";
        std::cout << "1. View Sudoku Board\n";
        std::cout << "2. Enter or change a Number\n";
        std::cout << "3. Check Puzzle Status\n";
        std::cout << "4. Exit Game\n";

        std::cout << "Please select an option: ";
        std::cin >> choice;

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
            std::cout << "Enter row (1-9): ";
            std::cin >> row;
            
            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Invalid row. Please enter a number. \n";
                continue;
            }

            std::cout << "Enter col (1-9): ";
            std::cin >> col;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Invalid column. Please enter a number. \n";
                continue;
            }

            std::cout << "Enter number (1-9): ";
            std::cin >> number;

            if (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Invalid number. Please enter a number. \n";
                continue;
            }

            if (row < 1 || row > 9 || col < 1 || col > 9 || number < 1 || number > 9)
            {
                std::cout << "Invalid entry. Rows, columns, and numbers must be 1-9.\n";
            }

            else
            {
                row = row - 1;
                col = col - 1;

                if (puzzle.isFixed(row, col))
                {
                    std::cout << "You cannot change original number.\n";
                }

                else if (checker.isValidMove(board, row, col, number))
                {
                    board.setCell(row, col, number);
                    std::cout << "Move accepted.\n";

                    if (checker.isBoardCompleted(board))
                    {
                        std::cout << "COMPLETED!!! YAAAAYYYY!!!!\n";
                    }
                }

                else
                {
                    std::cout << "Invalid move, try again.\n";
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
            std::cout << "Thanks for playing.\n";
        }

        else
        {
            std::cout << "That option is not available. Please try again.\n";
        }
    }

    while (choice != 4);


    return 0;
}

