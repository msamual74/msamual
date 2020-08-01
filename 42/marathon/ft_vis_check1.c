
int	ft_left_check1(int *row, int size)
{
	int i;
	int j;
	int vis;

	vis = 1;
	i = 1;
	while (++i <= size)
	{
		j = i;
		while (--j >= 0)
		{
			if (j == 0)
				vis++;
			else if (row[i] < row[j])
				break ;
		}
	}
	if (row[0] == vis)
		return (1);
	else
		return (0);
}

int	ft_right_check1(int *row, int size)
{
	int i;
	int j;
	int vis;

	vis = 1;
	i = size;
	while (--i > 0)
	{
		j = i;
		while (++j <= size + 1)
		{
			if (j == size + 1)
				vis++;
			if (row[i] < row[j])
				break ;
		}
	}
	if (row[size + 1] == vis)
		return (1);
	else
		return (0);
}

int	ft_row_check(int *row, int size, int value)
{
	row[size] = value;
	if (ft_left_check1(row, size) && ft_right_check1(row, size))
	{
		row[size] = 0;
		return (1);
	}
	row[size] = 0;
	return (0);
}

int	ft_col_check(int **board, int y, int size, int value)
{
	int i;
	int col[size + 2];

	i = -1;
	while (++i < size + 2)
		col[i] = board[i][y];
	col[size] = value;
	if (ft_left_check1(col, size) && ft_right_check1(col, size))
                return (1);
        return (0);
}
