/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciespino <ciespino@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 13:12:28 by ciespino          #+#    #+#             */
/*   Updated: 2024/10/06 13:12:51 by ciespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	c;
	char	str[2];

	if (nb < 0)
	{
		ft_putstr("-");
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	str[0] = c;
	str[1] = '\0';
	ft_putstr(str);
}

int	ft_check_arg(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] >= '1' && str[i] <= '4') || str[i] == ' ')
		{
			if (str[i] != ' ')
				count++;
		}
		else
			return (0);
		i++;
	}
	return (count == 16);
}
