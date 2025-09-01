#include <stdio.h>

int is_safe(int *board, int row, int col)
{
    for (int i = 0; i < row; i++) {
        if (board[i] == col)
            return 0;
        if (board[i] - i == col - row || board[i] + i == col + row)
            return 0;
    }
    return 1;
}

int solve(int *board, int row)
{
    int count = 0;
    if (row == 8)
        return 1;

    for (int col = 0; col < 8; col++) {
        if (is_safe(board, row, col)) {
            board[row] = col;
            count += solve(board, row + 1);
        }
    }
    return count;
}

int ft_eight_queens_puzzle(void)
{
    int board[8];
    return solve(board, 0);
}
