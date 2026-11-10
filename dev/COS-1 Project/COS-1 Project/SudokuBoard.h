#pragma once
#include <vector>

class SudokuPuzzle;

class SudokuBoard
{
private:
	
	std::vector<std::vector<int>> grid;

public:
	
	SudokuBoard();
	void displayBoard() const;
	int getCell(int row, int col) const;
	void setCell(int row, int col, int number);
};