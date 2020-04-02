
#include "ft.h"

char	g_square[9][9];

int	ft_solve(int i, int j)
{
	char num;

	if (i == 9)
		return (1);
	if (g_square[i][j] != '0')
	{
		if (j < 8)
			return (ft_solve(i, j + 1));
		else
			return (ft_solve(i + 1, 0));
	}
	num = '1';
	while (num <= '9')
	{
		if (ft_check(i, j, num))
		{
			g_square[i][j] = num;
			if (ft_solve(i, j))
				return (1);
		}
		num++;
	}
	g_square[i][j] = '0';
	return (0);
}
