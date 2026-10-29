#include "SudokuBoard.h"
#include <iostream>

SudokuBoard::SudokuBoard()
{
	grid = std::vector<std::vector<int>>(9, std::vector<int>(9, 0));
}

void SudokuBoard::displayBoard()
{
}
