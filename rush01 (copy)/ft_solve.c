#include "rush01.h"

int	ft_is_safe(int board[N][N], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (board[row][i] == num)
			return (0);
		i++;
	}
	i = 0;
	while (i < N)
	{
		if (board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

void	ft_get_next_cell(int *next_row, int *next_col, int row, int col)
{
	if (col == N - 1)
	{
		*next_row = row + 1;
		*next_col = 0;
	}
	else
	{
		*next_row = row;
		*next_col = col + 1;
	}
}

int	ft_try_heights(int board[N][N], int input[4][N], int row, int col)
{
	int	next_row;
	int	next_col;
	int	height;

	ft_get_next_cell(&next_row, &next_col, row, col);
	if (row == N)
		return (ft_check_visibility(board, input));
	height = 1;
	while (height <= N)
	{
		if (ft_is_safe(board, row, col, height))
		{
			board[row][col] = height;
			if (ft_try_heights(board, input, next_row, next_col))
				return (1);
		}
		height++;
	}
	board[row][col] = 0;
	return (0);
}

int	ft_solve(int board[N][N], int input[4][N], int row, int col)
{
	return ft_try_heights(board, input, row, col);
}
