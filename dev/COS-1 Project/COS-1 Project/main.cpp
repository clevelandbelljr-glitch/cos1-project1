#include <iostream>
#include "SudokuBoard.h"
#include "SudokuChecker.h"

int main()
{
    SudokuBoard board;

    SudokuChecker checker;

    board.setCell(0, 0, 5);

    board.setCell(1, 0, 5);

    board.setCell(1, 1, 5);

    std::cout << "Is this move valid? " << checker.isValidMove(board, 0, 1, 3) << std::endl;
    std::cout << "Column test: " << checker.isValidMove(board, 2, 0, 5) << std::endl;
    std::cout << "3x3 box test: " << checker.isValidMove(board, 0,1, 5) << std::endl;


    board.displayBoard();

    
}

