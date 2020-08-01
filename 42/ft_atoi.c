#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	neg;

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

int	main(int argc, char **argv)
{
	if (argc)
		printf("%d", ft_atoi(argv[1]));
}
