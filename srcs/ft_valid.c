
int	ft_valid(int k, char **argv)
{
	int i;
	int j;
	int count;
	int countnb;

	if (k != 10)
		return (0);
	i = 1;
	while (i < 10)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] > 47 && argv[i][j] < 58) || \
				argv[i][j] == '.')
			{
				if (argv[i][j] != '.')
					countnb++;
			}
			else
				return (0);
			count++;
			j++;
		}
		i++;
	}
	if (count == 81 && countnb > 16)
		return (1);
	return (0);
}
