
void	ft_col(int **board, int size)
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
                                board[j][i] = size + 1 - j;
	}
}

void	ft_row(int **board, int size)
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

void	ft_min(int **board, int size)
{
	ft_col(board, size);
	ft_row(board, size);
}
