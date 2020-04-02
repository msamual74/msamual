
#include "ft.h"

int	main(int argc, char **argv)
{
	if (ft_valid(argc, argv))
	{
		ft_square(argv);
		if (!checkin())
		{
			write(1, "Error\n", 6);
			return (0);
		}
		if (ft_solve(0, 0) && ft_check_multiple())
			ft_print();
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}
