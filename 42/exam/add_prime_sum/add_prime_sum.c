#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	unsigned int	nb;
	if (nbr < 0)
		{
			ft_putchar('-');
			nb = -nbr;
		}
	else
		nb = nbr;
	if (nb < 10)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

int     ft_atoi(char *str)
{
        int     res;
        int     neg;

        res = 0;
        neg = 0;
        while ((*str > 8 && *str < 15) || *str == ' ')
                str++;
        if (*str == '-')
                neg = 1;
        if (*str == '-' || *str == '+')
                str++;
        while (*str > 47 && *str < 58)
        {
                res = res * 10 + (*str - 48);
                str++;
        }
        if (neg)
                return (-res);
        return (res);
}

int	is_prime(int nb)
{
	int sqr;
	int i;

	i = 1;
	sqr = 0;
	while (sqr * sqr < nb)
		sqr++;
	while (++i <= sqr)
		if (nb % i == 0 && i != nb)
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int nb;
	int i;
	int sum;

	i = 1;
	sum = 0;
	nb = ft_atoi(av[1]);
	if (ac != 2 || nb < 1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	while (++i <= nb)
		if (is_prime(i))
			sum += i;
	ft_putnbr(sum);
	ft_putchar('\n');
	return (0);
}
