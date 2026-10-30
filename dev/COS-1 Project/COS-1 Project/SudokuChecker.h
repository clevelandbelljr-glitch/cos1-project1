#pragma once

#include "SudokuBoard.h"

class SudokuChecker
{
public:
	bool isValidMove(SudokuBoard& board, int row, int col, int number);
};