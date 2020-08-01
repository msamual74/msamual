
#include "fcntl.h"

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}

int	ft_calc(int a, int b, int op)
{
	int(*opers[5])(int, int);

	opers[0] = &add;
        opers[1] = &sub;
        opers[2] = &mul;
        opers[3] = &div;
        opers[4] = &mod;

	return(opers[op](a, b));
}
