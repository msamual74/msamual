
#include "fcntl.h"

int	ft_add(int a, int b)
{
	ft_putnbr(a + b);
	return(0);
}

int	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
	return (0);
}

int	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
	return (0);
}

int	ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Error : division by zero");
		return (1);
	}
	ft_putnbr(a / b);
	return (0);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Error : module by zero");
		return (1);
	}
	ft_putnbr(a % b);
	return (0);
}

int	ft_usage(int a, int b)
{
	a = b;
	b = -1;
	ft_putstr("error : only [ + - * / % ] are accepted.");
	return (0);
}

void	ft_calc(int a, int b, int(*f)(int, int))
{
	f(a, b);
}
