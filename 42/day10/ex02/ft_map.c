
#include "ft.h"

int	ft_fib(int nb)
{
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_fib(nb - 1) + ft_fib(nb - 2));
}

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int *res;
	int i;

	if (!(res = malloc(sizeof(int) * length + 1)))
		return (NULL);
	i = -1;
	while (++i < length)
		res[i] = f(tab[i]);
	return (res);
}

void	ft_print(int *res, int length)
{
	int i;

	i = -1;
	while (++i < length)
	{
		ft_putnbr(res[i]);
		ft_putchar('\n');
	}
}

int	main()
{
	int tab[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

	ft_print(ft_map(tab, 15, ft_fib), 15);
}
