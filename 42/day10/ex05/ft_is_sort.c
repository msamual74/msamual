
#include "ft.h"

int	ft_check(int a, int b)
{
	return (a - b);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (++i < length)
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
	return (1);
}

int	main()
{
	int tab[] = {1,2,1,4,5};
	ft_putnbr(ft_is_sort(tab, 5, ft_check));
	return (0);
}
