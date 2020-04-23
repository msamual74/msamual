
#include "ft.h"

int	main(int argc, char **argv)
{
	int **board;
	int size;

	size = (argc - 1) / 4;
	if (size < 3 || size > 9 || (argc - 1) % 4 != 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	board = ft_board(argv, size);
	ft_pre_solve(board, size);
	if (!ft_solve(board, size, 0))
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}
