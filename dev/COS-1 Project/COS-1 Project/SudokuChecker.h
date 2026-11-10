#pragma once
#include "SudokuBoard.h"

class SudokuChecker
{
public:
	bool isValidMove(const SudokuBoard& board, int row, int col, int number) const;
	bool isBoardCompleted(const SudokuBoard& board) const;
};