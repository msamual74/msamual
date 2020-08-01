
#include "ft.h"
#include <stdlib.h>

void	putchar(char c, char *res)
{
	while(*res)
		res++;
	*res = c;
}

int	char_count(int val, int base)
{
	int count;

	count = 0;
	while (val > 1)
	{
		val = val / base;
		count++;
	}
	return (count);
}

void	putnbr_base(int value, char *result, int base)
{
	char	*base_chars;

	base_chars = malloc(sizeof(char) * 16);
	base_chars = "0123456789ABCDEF";
	if (value < 0 && base == 10)
		putchar('-', result);
	if (value < 0)
		value = -value;
	if (value < base)
		putchar(base_chars[value], result);
	else
		{
			putnbr_base(value / base, result,  base);
			putchar (base_chars[value % base], result);
		}
}

char	*ft_itoa_base(int value, int base)
{
	char	*result;
	int	count;

	count  = char_count(value, base);
	result = malloc(sizeof(char) * count + 1);
	putnbr_base(value, result, base);
	return (result);
}

int	main()
{
	ft_putstr(ft_itoa_base(-255, 16));
	return(0);
}
