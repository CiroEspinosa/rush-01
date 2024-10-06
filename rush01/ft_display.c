/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciespino <ciespino@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:11:57 by ciespino          #+#    #+#             */
/*   Updated: 2024/10/06 13:12:51 by ciespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_display_map(int board[N][N])
{
	int	i;
	int	j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			ft_putnbr(board[i][j]);
			if (j != N - 1)
				ft_putstr(" ");
			else
				ft_putstr("\n");
			j++;
		}
		i++;
	}
}
