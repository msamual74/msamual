
#include "ft.h"

int	ft_check2(int **board, int size, int value, int pos)
{
	int x;
	int y;
	int i;

	x = pos / size + 1;
	y = pos % size + 1;
	i = 0;
	while (++i <= size)
	{
		if (board[x][i] == size)
		{
			if (y < i)
			{
				if (!to_the_left(board[x], size, value, y))
					return (0);
			}
			else
				if (!to_the_right(board[x], size, value, y))
					return (0);
		}
	}
	i = 0;
	board[x][y] = value;
	while (++i <= size)
	{
		if (board[i][y] == size)
		{
			if (x < i)
			{
				if (!upper(board, y, size))
				{
					board[x][y] = -1;
					return (0);
				}
			}
			else
				if (!below(board, y, size))
				{
					board[x][y] = -1;
					return (0);
				}
		}
	}
	return(1);

}
