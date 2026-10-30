#include "SudokuChecker.h"

bool SudokuChecker::isValidMove(SudokuBoard& board, int row, int col, int number)
{
    if (row < 0 || row >= 9 || col < 0 || col >= 9)
    {
        return false;
    }

    if (number < 1 || number > 9)
    {
        return false;
    }

    if (board.getCell(row, col) != 0)
    {
        return false;
    }
}
