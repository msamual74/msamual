
#include "ft.h"

int	ft_check(int **board, int size, int value, int pos)
{
	int x;
	int y;
	int i;

	x = (pos / size) + 1;
	y = (pos % size) + 1;
	i = 0;
	while (++i <= size)
	{
		if (board[x][i] == value)
			return (0);
	}
	i = 0;
	while (++i <= size)
	{
		if (board[i][y] == value)
			return (0);
	}
	if (y == size && !ft_row_check(board[x], size, value))
		return (0);
	if (x == size && !ft_col_check(board, y, size, value))
		return (0);
	return (1);
}
