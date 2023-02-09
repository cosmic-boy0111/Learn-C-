#include "SudokuSolver.h"

bool SudokuSolver::isSafe(int grid[N][N], int row,
    int col, int num) {

    for (int x = 0; x <= 8; x++)
        if (grid[row][x] == num)
            return false;

    for (int x = 0; x <= 8; x++)
        if (grid[x][col] == num)
            return false;

    int startRow = row - row % 3,
        startCol = col - col % 3;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j +
                startCol] == num)
                return false;

    return true;
}

bool SudokuSolver::solveSudoku(int grid[N][N], int row, int col) {

    if (row == N - 1 && col == N)
        return true;

    if (col == N) {
        row++;
        col = 0;
    }

    if (grid[row][col] > 0)
        return solveSudoku(grid, row, col + 1);

    for (int num = 1; num <= N; num++)
    {

        if (isSafe(grid, row, col, num))
        {

            grid[row][col] = num;

            if (solveSudoku(grid, row, col + 1))
                return true;
        }

        grid[row][col] = 0;
    }
    return false;
}
bool SudokuSolver::Solve(int sudoku[N][N]) {
    return solveSudoku(sudoku, 0, 0);
}
