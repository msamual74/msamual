
#include "ft.h"

void	ft_swap_pointer(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *))
{
	int i;
	int j;

	i = 1;
	while(tab[i])
	{
		j = i;
		while (j > 0 && cmp(tab[j - 1], tab[j]) > 0)
		{
			ft_swap_pointer(&tab[j - 1], &tab[j]);
			j--;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char **tab;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	tab = ft_split_whitespaces(argv[1]);
	ft_advanced_sort_wordtab(tab, ft_strcmp);
	while (*tab)
	{
		ft_putstr(*tab);
		ft_putchar('\n');
		tab++;
	}
	return (0);
}
