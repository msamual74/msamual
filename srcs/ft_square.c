
char	g_square[9][9];
char	g_square1[9][9];

void	ft_square(char **argv)
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] != '.')
			{
				g_square1[i - 1][j] = argv[i][j];
				g_square[i - 1][j] = argv[i][j];
			}
			else
			{
				g_square1[i - 1][j] = '0';
				g_square[i - 1][j] = '0';
			}
			j++;
		}
		i++;
	}
}
