/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciespino <ciespino@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:12:13 by ciespino          #+#    #+#             */
/*   Updated: 2024/10/06 13:12:51 by ciespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	board[N][N];
	int	input[4][N];

	if (argc != 2 || !ft_check_arg(argv[1]))
	{
		ft_putstr("Error\n");
		return (0);
	}
	ft_initialize(argv, board, input);
	if (ft_solve(board, input, 0, 0))
		ft_display_map(board);
	else
	{
		ft_putstr("Error\n");
	}
	return (0);
}
