
#include "ft.h"

char	g_square[9][9];

int	checkin(void)
{
	int	i;
	int	j;
	char	num;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			num = g_square[i][j];
			g_square[i][j] = '0';
			if (num != '0')
				if (!ft_check(i, j, num))
					return (0);
			g_square[i][j] = num;
			j++;
		}
		i++;
	}
	return (1);
}
