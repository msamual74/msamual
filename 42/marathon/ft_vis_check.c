
#include "ft.h"

int	ft_left_check(int *row, int size)
{
	int i;
	int vis;
	int tmp;

	tmp = row[1];
	vis = 1;
	i = 1;
	while (++i <= size && tmp != size)
	{
		if (row[i] > tmp)
		{
			vis++;
			tmp = row[i];
		}
	}
	if (row[0] >= vis)
		return (1);
	else
		return (0);
}

int	ft_right_check(int *row, int size)
{
	int i;
	int vis;
	int tmp;

	tmp = row[size];
	vis = 1;
	i = size;
	while (--i > 0 && tmp != size)
	{
		if (row[i] > tmp)
		{
			vis++;
			tmp = row[i];
		}
	}
	if (row[size + 1] >= vis)
		return (1);
	else
		return (0);
}

int	to_the_left(int *row, int size, int value, int y)
{
	row[y] = value;
	if (ft_left_check(row, size))
	{
		row[y] = -1;
		return (1);
	}
	row[y] = -1;
	return (0);
}

int     to_the_right(int *row, int size, int value, int y)
{
        row[y] = value;
        if (ft_right_check(row, size))
        {
                row[y] = -1;
                return (1);
        }
        row[y] = -1;
        return (0);
}

int	upper(int **board, int y, int size)
{
	int i;
	int col[size + 2];

	i = -1;
	while (++i < size + 2)
		col[i] = board[i][y];
	if (ft_left_check(col, size))
                return (1);
        return (0);
}

int	below(int **board, int y, int size)
{
	int i;
	int col[size + 2];

	i = -1;
	while (++i < size + 2)
		col[i] = board[i][y];
	if (ft_right_check(col, size))
		return (1);
	return (0);
}
