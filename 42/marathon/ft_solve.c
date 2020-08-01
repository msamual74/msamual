
#include "ft.h"

int	ft_solve(int **board, int size, int pos)
{
	int value;
	int x;
	int y;

	x = (pos / size) + 1;
	y = (pos % size) + 1;
//	ft_print_board(board, size);
	if (pos == size * size)
	{
		ft_print_board(board, size);
		return (1);
	}
	if (board[x][y] > 0)
		return (ft_solve(board, size, ++pos));
	value = 1;
	while (value <= size)
	{
//		ft_putnbr(ft_check2(board,size,value,pos));
		if (ft_check(board, size, value, pos) && \
				ft_check2(board, size, value, pos))
		{
			board[x][y] = value;
			if (ft_solve(board, size, pos))
				return (1);
		}
		value++;
	}
	board[x][y] = -1;
	return (0);
}
