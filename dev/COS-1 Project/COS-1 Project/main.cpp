#include <iostream>
#include "SudokuBoard.h"
#include "SudokuChecker.h"

int main()
{
    SudokuBoard board;

    SudokuChecker checker;

    int choice;
    int row;
    int col;
    int number;


    do
    {
        std::cout << "\n==== SUDOKU GAME ====\n";
        std::cout << "1. Display Sudoku Board\n";
        std::cout << "2. Enter a Number\n";
        std::cout << "3. Check a Move\n";
        std::cout << "4. Exit Game\n";
        std::cout << "Please select and option: ";
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

            row = row - 1;
            col = col - 1;

            if (checker.isValidMove(board, row, col, number))
            {
                board.setCell(row, col, number);
                std::cout << "Move accepted.\n";
            }

            else
            {
                std::cout << "Invalid move, try again.\n";
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

