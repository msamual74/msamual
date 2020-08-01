
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

int	ft_any(char **tab, int(*f)(char *))
{
	while (*tab)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}

int main()
{
	char **tab;

	tab = malloc(sizeof(char *) * 4);
	tab[0] = "Hello World";
	tab[1] = "fdmbmbimbpr";
	tab[2] = "ckvoxcva";
	tab[3] = NULL;
	ft_putnbr(ft_any(tab, ft_find));
	return (0);
}
