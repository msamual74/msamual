
#include "ft.h"

void	ft_print_board(int **board, int size)
{
	int i;
	int j;

	i = 0;
	while (++i < size + 1)
	{
		j = 0;
		while (++j < size + 1)
		{
			ft_putnbr(board[i][j]);
			ft_putstr(" ");
		}
		ft_putstr("\n");
	}
}
