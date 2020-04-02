
#include "ft.h"

char	g_square[9][9];
char	g_square1[9][9];

int	ft_check_multiple()
{
	int i;
	int j;

	if (ft_rev_solve(8, 8))
	{
		i = -1;
		while (++i < 9)
		{
			j = -1;
			while (++j < 9)
			{
				if (g_square[i][j] != g_square1[i][j])
					return (0);
			}
		}
	}
	return (1);
}
