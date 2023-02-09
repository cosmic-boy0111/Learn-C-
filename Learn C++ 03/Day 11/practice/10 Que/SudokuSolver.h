#pragma once
#include <assert.h>
#define N 9

class SudokuSolver {
public:
    static bool isSafe(int grid[N][N], int row, int col, int num);

    static bool solveSudoku(int grid[N][N], int row, int col);
    static bool Solve(int sudoku[N][N]);
};