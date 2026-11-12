#include "SudokuPuzzle.h"
#include <cstdlib>
#include <fstream>
#include <iostream>

void SudokuPuzzle::createPuzzle(SudokuBoard& board, int puzzleChoice)
{
	int puzzle[9][9] =
	{
		{ 5,3,0,0,7,0,0,0,0 },
		{ 6,0,0,1,9,5,0,0,0 },
		{ 0,9,8,0,0,0,0,6,0 },
		{ 8,0,0,0,6,0,0,0,3 },
		{ 4,0,0,8,0,3,0,0,1 },
		{ 7,0,0,0,2,0,0,0,6 },
		{ 0,6,0,0,0,0,2,8,0 },		
		{ 0,0,0,4,1,9,0,0,5 },
		{ 0,0,0,0,8,0,0,7,9 }
	};

	int puzzle2[9][9] =
	{
		{ 0,2,0,6,0,8,0,0,0 },
		{ 5,8,0,0,0,9,7,0,0 },
		{ 0,0,0,0,4,0,0,0,0 },
		{ 3,7,0,0,0,0,5,0,0 },
		{ 6,0,0,0,0,0,0,0,4 },
		{ 0,0,8,0,0,0,0,1,3 },
		{ 0,0,0,0,2,0,0,0,0 },
		{ 0,0,9,8,0,0,0,3,6 },
		{ 0,0,0,3,0,6,0,9,0 }
	};

	fixedCells = std::vector<std::vector<bool>>(9, std::vector<bool>(9, false));

	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			int number;

			if (puzzleChoice == 0)
			{
				number = puzzle[row][col];
			}

			else
			{
				number = puzzle2[row][col];
			}

			board.setCell(row, col, number);
			fixedCells[row][col] = (number != 0);
		}
	}
}



bool SudokuPuzzle::isFixed(int row, int col) const
{
	return fixedCells[row][col];
}

bool SudokuPuzzle::isPuzzleCompleted(const SudokuBoard& board, const SudokuChecker& checker)
{
	return checker.isBoardCompleted(board);
}

void SudokuPuzzle::savePuzzle(const SudokuBoard& board, int puzzleChoice) const
{
	std::ofstream file("sudoku_save.txt");

	if (!file)
	{
		std::cout << "Unable to save puzzle.\n";
		return;
	}

	file << puzzleChoice << "\n";

	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			file << board.getCell(row, col) << " ";
		}

		file << "\n";
	}

	if (file)
	{
		std::cout << "Puzzle saved successfully.\n";
	}

	else
	{
		std::cout << "Error while saving puzzle.\n";
	}
}

bool SudokuPuzzle::loadPuzzle(SudokuBoard& board, int& puzzleChoice)
{
	std::ifstream file("sudoku_save.txt");

	if (!file)
	{
		return false;
	}

	int savedChoice;
	file >> savedChoice;

	if (!file || savedChoice < 0 || savedChoice > 1)
	{
		return false;
	}

	SudokuBoard originalBoard;
	createPuzzle(originalBoard, savedChoice);

	for (int row = 0; row < 9; row++)
	{
		for (int col = 0; col < 9; col++)
		{
			int number;

			if (!(file >> number))
			{
				return false;
			}

			if (number < 0 || number > 9)
			{
				return false;
			}

			board.setCell(row, col, number);
		}
	}

	puzzleChoice = savedChoice;
	return true;
}
