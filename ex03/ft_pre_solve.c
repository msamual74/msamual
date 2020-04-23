
void	ft_fill_col(int **board, int size)
{
	int i;
	int j;

	i = 0;
	while (++i <= size)
	{
		j = 0;
		if (board[0][i] == size)
			while (++j <= size)
				board[j][i] = j;
	}
	i = 0;
	while (++i <= size)
	{
		j = size + 1;
		if (board[size + 1][i] == size)
			while (--j > 0)
				board[j][i] = size - j + 1;
	}
}

void	ft_fill_row(int **board, int size)
{
	int i;
	int j;

	i = 0;
	while (++i <= size)
	{
		j = 0;
		if (board[i][0] == size)
			while (++j <= size)
				board[i][j] = j;
	}
	i = 0;
	while (++i <= size)
	{
		j = size + 1;
		if (board[i][size + 1] == size)
			while (--j > 0)
				board[i][j] = size - j + 1;
	}
}

void	ft_pre_solve(int **board, int size)
{
	ft_fill_col(board, size);
	ft_fill_row(board, size);
}
