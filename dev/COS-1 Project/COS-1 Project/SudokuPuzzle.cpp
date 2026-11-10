#include "SudokuPuzzle.h"
#include <cstdlib>

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
			if (puzzleChoice == 0)
			{
				board.setCell(row, col, puzzle[row][col]);
				fixedCells[row][col] = (puzzle[row][col] != 0);
			}
			else
			{
				board.setCell(row, col, puzzle2[row][col]);
				fixedCells[row][col] = (puzzle2[row][col] != 0);
			}
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
