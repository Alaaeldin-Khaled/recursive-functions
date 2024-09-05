int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
{
    if (row == ROWS && col == COLS)
        return 0;

//    int max_num = max(grid[row + 1][col], grid[row][col + 1])

    if (row + 1 < ROWS && col + 1 < COLS)
    {
        if (grid[row + 1][col + 1] > grid[row][col + 1] && grid[row + 1][col + 1] > grid[row + 1][col])
        {
            return grid[row][col] + path_sum(grid, row + 1, col + 1, ROWS, COLS);
        }

        else if (grid[row + 1][col] > grid[row][col + 1] && grid[row + 1][col] > grid[row + 1][col + 1])
        {
            return grid[row][col] + path_sum(grid, row + 1, col, ROWS, COLS);
        }
        else
        {
            return grid[row][col] + path_sum(grid, row, col + 1, ROWS, COLS);
        }

    }

    else if (row + 1 < ROWS)
    {
        return grid[row][col] + path_sum(grid, row + 1, col, ROWS, COLS);
    }

    else if (col + 1 < COLS)
    {
        return grid[row][col] + path_sum(grid, row, col + 1, ROWS, COLS);
    }

    return grid[row][col];
}
