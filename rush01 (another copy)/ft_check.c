#include "rush01.h"

int	ft_count_visible(int *line, int n)
{
	int	i;
	int	max_height;
	int	visible_count;

	i = 0;
	max_height = 0;
	visible_count = 0;
	while (i < n)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
		i++;
	}
	return (visible_count);
}

int	ft_count_visible_reverse(int *line, int n)

{
	int	i;
	int	max_height;
	int	visible_count;

	i = n - 1;
	max_height = 0;
	visible_count = 0;
	while (i >= 0)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			visible_count++;
		}
		i--;
	}
	return (visible_count);
}

int	ft_check_row(int board[N][N], int row, int left, int right)

{
	if (ft_count_visible(board[row], N) != left)
		return (0);
	if (ft_count_visible_reverse(board[row], N) != right)
		return (0);
	return (1);
}

int	ft_check_col(int board[N][N], int col, int up, int down)

{
	int	col_array[N];
	int	i;

	i = 0;
	while (i < N)
	{
		col_array[i] = board[i][col];
		i++;
	}
	if (ft_count_visible(col_array, N) != up)
		return (0);
	if (ft_count_visible_reverse(col_array, N) != down)
		return (0);
	return (1);
}

int	ft_check_visibility(int board[N][N], int input[4][N])
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (!ft_check_row(board, i, input[2][i], input[3][i]))
			return (0);
		i++;
	}
	i = 0;
	while (i < N)
	{
		if (!ft_check_col(board, i, input[0][i], input[1][i]))
			return (0);
		i++;
	}
	return (1);
}
