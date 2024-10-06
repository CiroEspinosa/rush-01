#include "rush01.h"

void	ft_initialize(char **argv, int board[N][N], int input[4][N])
{
	ft_fill_input(argv[1], input);
	ft_initialize_board(board);
}

void	ft_initialize_board(int board[N][N])
{
	int	i;
	int	j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_fill_input(char *arg, int input[4][N])
{
	int	i;

	i = 0;
	while (*arg)
	{
		if (*arg >= '1' && *arg <= '4')
		{
			if (i < 4)
				input[0][i] = *arg - '0';
			else if (i < 8)
				input[1][i - 4] = *arg - '0';
			else if (i < 12)
				input[2][i - 8] = *arg - '0';
			else
				input[3][i - 12] = *arg - '0';
			i++;
		}
		arg++;
	}
}
