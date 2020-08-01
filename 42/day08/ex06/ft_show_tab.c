
#include "ft_stock_par.h"

void	ft_print_argument(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_size(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_print_size(n / 10);
		ft_putchar(n % 10 + 48);
	}
	else
		ft_putchar(n + 48);
}

void	ft_print_tab(char **tab)
{
	while (*tab)
	{
		ft_print_argument(*tab);
		ft_putchar('\n');
		tab++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	while (par->str)
	{
		ft_print_argument(par->copy);
		ft_putchar('\n');
		ft_print_size(par->size_param);
		ft_putchar('\n');
		ft_print_tab(par->tab);
		par++;
	}
}

int	main(int argc, char **argv)
{
	t_stock_par *res;
	res = ft_param_to_tab(argc, argv);
	ft_show_tab(res);
//	ft_print_argument(res[1].tab[0]);
}
