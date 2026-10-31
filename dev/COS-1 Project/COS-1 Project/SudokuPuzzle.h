#pragma once

#include "SudokuBoard.h"
#include <vector>

class SudokuPuzzle
{
private:
	std::vector < std::vector<bool>> fixedCells;

public:
	void createPuzzle(SudokuBoard& board);
	bool isFixed(int row, int col);
};