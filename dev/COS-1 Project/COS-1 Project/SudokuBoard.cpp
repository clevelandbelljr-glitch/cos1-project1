#include "SudokuBoard.h"
#include <iostream>

SudokuBoard::SudokuBoard()
{
	grid = std::vector<std::vector<int>>(9, std::vector<int>(9.0));
}

void SudokuBoard::displayBoard()
{
	for (int row = 0; row < 9; row++)
	{
		if (row % 3 == 0)
		{
			std::cout << "+-------+-------+-------+\n";
		}

		for (int col = 0; col < 9; col++)
		{
			if (col % 3 == 0)
			{
				std::cout << "| ";
			}

			std::cout << grid[row][col] << " ";
		}		

		std::cout << "|\n";
	}

	std::cout << "+-------+-------+-------+\n";
}

int SudokuBoard::getCell(int row, int col)
{
	return grid[row][col];
}

void SudokuBoard::setCell(int row, int col, int number)
{
	grid[row][col] = number;
}
