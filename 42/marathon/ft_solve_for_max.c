
#include "ft.h"

int	ft_solve_for_max(int **board, int size, int pos)
{
	int x;
	int y;

	x = pos / size + 1;
	y = pos % size + 1;
	if (pos == size * size)
		return (ft_solve(board, size, 0));
	if (board[x][y] == 0 && ft_check(board, size, size, pos))
	{
		board[x][y] = size;
		if (ft_solve_for_max(board, size, pos))
			return (1);
	}
	else if (ft_solve_for_max(board, size, ++pos))
		return (1);
	board[x][y] = -1;
	return (0);
}
