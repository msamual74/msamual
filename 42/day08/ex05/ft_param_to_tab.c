
#include "ft_stock_par.h"
#include <stdio.h>

int			ft_strlength(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char			*ft_copy(char *str, int length)
{
	char		*copy;
	int		i;

	copy = malloc(sizeof(char) * (length + 1));
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int 		i;
	t_stock_par	*param;

	param = malloc(sizeof(t_stock_par) * (ac + 1));
	i = 0;
	while (++i < ac)
	{
		param[i].size_param = ft_strlength(av[i]);
		param[i].str = av[i];
		param[i].copy = ft_copy(av[i], param[i].size_param);
		param[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	param[i].str = NULL;
	return (param);
}

int main(int argc, char **argv)
{
	t_stock_par *res;

	res = ft_param_to_tab(argc, argv);
	printf("%s", res[1].tab[0]);
}
