
#include "fcntl.h"

int	ft_operator(char *oper)
{
	if (oper[0] == '+' && oper[1] == '\0')
		return (0);
	else if (*oper == '-' && oper[1] == '\0')
		return (1);
	else if (*oper == '*' && oper[1] == '\0')
		return (2);
	else if (*oper == '/' && oper[1] == '\0')
		return (3);
	else if (*oper == '%' && oper[1] == '\0')
		return (4);
	else
		return (-1);
}

int	main(int argc, char **argv)
{
	int op;
	int a;
	int b;

	if (argc != 4)
		return (1);
	op = ft_operator(argv[2]);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (op == -1)
	{
		ft_putstr("0\n");
		return (1);
	}
	if (b == 0 && (op == 3 || op == 4))
	{
		op == 3 ? ft_putstr("Stop : divide by zero\n") : \
		    ft_putstr("Stop : module by zero\n");
		return (1);
	}
	ft_putnbr(ft_calc(a, b, op));
	ft_putchar('\n');
	return (0);
}

