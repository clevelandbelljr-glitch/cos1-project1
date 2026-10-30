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

    for (int c = 0; c < 9; c++)
    {
        if (board.getCell(row, c) == number)
        {
            return false;
        }
    }

    for (int r = 0; r < 9; r++)
    {
        if (board.getCell(r, col) == number)
        {
            return false;
        }
    }

    int startRow = (row / 3) * 3;
    int startCol = (col / 3) * 3;

    for (int r = startRow; r < startRow + 3; r++)
    {
        for (int c = startCol; c <startCol + 3; c++)

            if (board.getCell(r, c) == number)
            {
                return false;
            }
    }

    return true;
}
