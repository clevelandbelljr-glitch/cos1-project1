#pragma once

#include "SudokuBoard.h"
#include "SudokuChecker.h"
#include <vector>

class SudokuPuzzle
{
private:
	std::vector < std::vector<bool>> fixedCells;

public:
	void createPuzzle(SudokuBoard& board, int puzzleChoice);
	bool isFixed(int row, int col) const;
	bool isPuzzleCompleted(const SudokuBoard& board, const SudokuChecker& checker);
};