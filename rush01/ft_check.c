/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciespino <ciespino@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:11:47 by ciespino          #+#    #+#             */
/*   Updated: 2024/10/06 13:12:51 by ciespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
 * Function: ft_check_col
 * ------------------------
 * Checks if a specific column of the board meets the visibility requirements
 * from both the top and bottom sides.
 *
 * board: the 2D array representing the game board.
 * col: the index of the column to check.
 * up: the expected count of visible buildings from the top.
 * down: the expected count of visible buildings from the bottom.
 *
 * returns: 1 if the column meets the requirements, otherwise 0.
 */
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

/*
 * Function: ft_check_visibility
 * -------------------------------
 * Checks the visibility of all rows and columns on the board
 * against the given visibility input.
 *
 * board: the 2D array representing the game board.
 * input: a 2D array containing the expected visibility values.
 *
 * returns: 1 if all visibility checks are satisfied, otherwise 0.
 */
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
