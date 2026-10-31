#include <iostream>
#include "SudokuBoard.h"
#include "SudokuChecker.h"
#include "SudokuPuzzle.h"

int main()
{
    SudokuBoard board;

    SudokuChecker checker;

    SudokuPuzzle puzzle;

    puzzle.createPuzzle(board);

    int choice;
    int row;
    int col;
    int number;


    do
    {
        std::cout << "\n==== SUDOKU GAME ====\n";
        std::cout << "1. Display Sudoku Board\n";
        std::cout << "2. Enter a Number\n";
        std::cout << "3. Check Puzzle Status\n";
        std::cout << "4. Exit Game\n";
        std::cout << "Please select an option: ";
        std::cin >> choice;

        if (choice == 1)
        {
            board.displayBoard();
        }

        else if (choice == 2)
        {
            std::cout << "Enter row (1-9): ";
            std::cin >> row;

            std::cout << "Enter col (1-9): ";
            std::cin >> col;

            std::cout << "Enter number (1-9): ";
            std::cin >> number;

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


    return true;
}

