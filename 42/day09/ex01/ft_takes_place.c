
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int	x;
	int	y;
	char	sx;
	char	sy;

	x = hour % 12;
	y = (hour + 1) % 12;
	if (hour == 24) 
		hour = 0;
	if (hour >= 0 && hour < 12)
		sx = 'A';
	else
		sx = 'P';
	if (hour + 1 >= 0 && hour + 1 < 12)
		sy = 'A';
	else
		sy = 'P';
	if (x == 0)
		x = 12;
	if (y == 0)
		y = 12;
	printf("THE FOLLOWING TAKES BETWEEN %d.00 %c.M. AND %d.00 %c.M.\n" \
			, x, sx, y, sy);
}

int	main()
{
	ft_takes_place(23);
	return (0);
}
