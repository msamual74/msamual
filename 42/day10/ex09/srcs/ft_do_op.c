
#include "ft_opp.h"

int	main(int argc, char **argv)
{
	int a;
	int b;
	int i;

	if (argc != 4)
		return (1);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	i = -1;
	while (++i < 5)
	{
		if (ft_strcmp(g_opptab[i].op, argv[2]) == 0)
		{
			ft_calc(a, b, g_opptab[i].f);
			ft_putchar('\n');
			return (0);
		}
	}
	ft_calc(a, b, g_opptab[i].f);
	ft_putchar('\n');
	return (0);
}

