
#include "ft.h"

int	ft_is_definitely(int **board, int size, int x, int y)
{
	int i;

	i = 0;
	while (++i <= size)
	{
		if (board[x][i] == 0 && i != y)
			break ;
	}
	if (i == size + 1)
		return (1);
	i = 0;
	while (++i <= size)
	{
		if (board[i][y] == 0 && i != x)
			return (0);
	}
	return (1);
}

int	ft_definitely(int **board, int size)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (++i <= size)
	{
		j = 0;
		while (++j <= size)
		{
			if (board[i][j] == 0)
				if (ft_is_definitely(board, size, i, j))
				{
					ft_is_max(board, size, i, j);
					count++;
				}
		}
	}
	if (count)
		ft_definitely(board, size);
	else
		return (0);
}
