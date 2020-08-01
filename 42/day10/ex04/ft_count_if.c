
#include "ft.h"

int	ft_find(char *str)
{
	while (*str)
	{
		if (*str == 'a')
			return (1);
		str++;
	}
	return (0);
}

int	ft_count_if(char **tab, int(*f)(char *))
{
	int i;

	i = -1;
	while (tab[++i])
		if (f(tab[i]))
			return (i);
	return (-1);
}

int main()
{
	char **tab;

	tab = malloc(sizeof(char *) * 4);
	tab[0] = "Hello World";
	tab[1] = "fdmbmbimbpr";
	tab[2] = "ckvoxcva";
	tab[3] = NULL;
	ft_putnbr(ft_count_if(tab, ft_find));
	return (0);
}
