#include <iostream>
#include "SudokuBoard.h"
#include "SudokuChecker.h"

int main()
{
    SudokuBoard board;

    SudokuChecker checker;

    board.setCell(0, 0, 5);

    std::cout << "Is this move valid? " << checker.isValidMove(board, 0, 1, 3) << std::endl;

    board.displayBoard();

    
}

