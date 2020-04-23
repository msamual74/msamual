
#include "ft.h"

void	ft_input_to_board(int **board, char **argv, int size)
{
	int i;

	argv++;
	i = 0;
        while (++i < size + 1)
        {
                board[0][i] = **argv - 48;
                argv++;
        }
        i = 0;
        while (++i < size + 1)
	{
		board[size + 1][i] = **argv - 48;
		argv++;
	}
	i = 0;
	while (++i < size + 1)
	{
		board[i][0] = **argv - 48;
		argv++;
	}
	i = 0;
	while (++i < size + 1)
	{
		board[i][size + 1] = **argv - 48;
		argv++;
	}
}

int	**ft_board(char **argv, int size)
{
	int	**result;
	int	i;
	int	j;

	result = malloc(sizeof(int *) * (size + 2));
	i = -1;
	while (++i < size + 2)
	{
		result[i] = malloc(sizeof(int) * (size + 2));
		j = -1;
		while (++j < size + 2)
			result[i][j] = 0;
	}
	ft_input_to_board(result, argv, size);
	return (result);
}
