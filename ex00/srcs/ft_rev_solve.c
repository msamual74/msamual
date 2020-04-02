
#include "ft.h"

char	g_square1[9][9];

int	ft_rev_solve(int i, int j)
{
	char num;

	if (i == -1)
		return(1);
	if (g_square1[i][j] != '0')
	{
		if (j > 0)
			return (ft_rev_solve(i, j - 1));
		else
			return (ft_rev_solve(i - 1, 8));
	}
	num = '1';
	while (num <= '9')
	{
		if (ft_rev_check(i, j, num))
		{
			g_square1[i][j] = num;
			if (ft_rev_solve(i, j))
				return (1);
		}
		num++;
	}
	g_square1[i][j] = '0';
	return (0);
}
