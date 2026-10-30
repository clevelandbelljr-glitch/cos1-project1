#pragma once
#include <vector>

class SudokuBoard
{
private:
	
	std::vector<std::vector<int>> grid;

public:
	
	SudokuBoard();
	void displayBoard();
	int getCell(int row, int col);
};