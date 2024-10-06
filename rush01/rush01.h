/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciespino <ciespino@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 11:16:56 by ciespino          #+#    #+#             */
/*   Updated: 2024/10/06 13:14:11 by ciespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define N 4

void	ft_display_map(int board[N][N]);
int		ft_check_arg(char *str);
int		ft_is_safe(int board[N][N], int row, int col, int num);
int		ft_check_row(int board[N][N], int row, int left, int right);
int		ft_check_col(int board[N][N], int col, int up, int down);
int		ft_count_visible(int *line, int n);
int		ft_count_visible_reverse(int *line, int n);
int		ft_check_visibility(int board[N][N], int input[4][N]);
int		ft_try_heights(int board[N][N], int input[4][N], int row, int col);
void	ft_get_next_cell(int *next_row, int *next_col, int row, int col);
int		ft_solve(int board[N][N], int input[4][N], int row, int col);
void	ft_initialize(char **argv, int board[N][N], int input[4][N]);
void	ft_putstr(char *str);
void	ft_putnbr(int n);
void	ft_fill_input(char *arg, int input[4][N]);
void	ft_initialize_board(int board[N][N]);
