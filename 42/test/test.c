#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char tmp;

	tmp = 0;
	tmp = octet % 16;
	octet = octet / 16;
	result = tmp * 16 + octet;
	return (result);
}

int	main(int ac, char **av)
{
	unsigned char octet;
	unsigned char result;
	
	ac += 1;
	octet = av[1][0];
	result = (swap_bits(octet));
	printf("octet is: %d %c\nresult is: %d %c", 
		octet, octet, result, result);
	return (0);
}
