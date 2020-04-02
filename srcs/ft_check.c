
char	g_square[9][9];

int	row(int i, int j, char num)
{
	j = 0;
	while (j < 9)
	{
		if (g_square[i][j] == num)
			return (0);
		j++;
	}
	return (1);
}

int	col(int i, int j, char num)
{
	i = 0;
	while (i < 9)
	{
		if (g_square[i][j] == num)
			return (0);
		i++;
	}
	return (1);
}

int	sqr(int i, int j, char num)
{
	int x;
	int y;

	if (i < 3)
		i = -1;
	else if (i < 6)
		i = 2;
	else
		i = 5;
	if (j < 3)
		j = -1;
	else if (j < 6)
		j = 2;
	else
		j = 5;
	x = i + 1;
	y = j + 1;
	while (++i < (x + 3))
	{
		j = y - 1;
		while (++j < (y + 3))
			if (g_square[i][j] == num)
				return (0);
	}
	return (1);
}

int	ft_check(int i, int j, char num)
{
	if (row(i, j, num) && col(i, j, num) && sqr(i, j, num))
		return (1);
	else
		return (0);
}
