#include "SudokuBoard.h"
#include <iostream>

SudokuBoard::SudokuBoard()
{
	grid = std::vector<std::vector<int>>(9, std::vector<int>(9, 0));
}

void SudokuBoard::displayBoard()
{
	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			std::cout << grid[row][col] << " ";
		}

		std::cout << std::endl;
	}
}
