
#include "ft.h"

void	ft_is_max(int **board, int size, int x, int y)
{
	int i;
	
	i = 0;
	while (++i < size + 1)
		if (board[x][i] == 0)
			board[x][i] = -1;
	i = 0;
	while (++i < size + 1)
		if (board[i][y] == 0)
			board[i][y] = -1;
	board[x][y] = size;
}

void	col(int **board, int size)
{
	int i;
	int k;

	i = 0;
	while (++i <= size)
	{
		k = 0;
		while (++k < board[0][i])
			board[k][i] = -1;
		if (board[0][i] == 1)
			ft_is_max(board, size, 1, i);
	}

	i = 0;
	while (++i <= size)
	{
		k = 0;
		while (++k < board[size + 1][i])
			board[size - k + 1][i] = -1;
		if (board[size + 1][i] == 1)
			ft_is_max(board, size, size, i);
	}
}

void	row(int **board, int size)
{
	int i;
	int k;

	i = 0;
	while (++i <= size)
	{
		k = 0;
		while (++k < board[i][0])
			board[i][k] = -1;
		if (board[i][0] == 1)
			ft_is_max(board, size, i, 1);
	}
	i = 0;
	while (++i <= size)
	{
		k = 0;
		while (++k < board[i][size + 1])
			board[i][size - k + 1] = -1;
		if (board[i][size + 1] == 1)
				ft_is_max(board, size, i, size);
	}
}

void	ft_pre_solve(int **board, int size)
{
	col(board, size);
	row(board, size);
	ft_min(board, size);

}
