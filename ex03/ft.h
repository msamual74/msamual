
#ifndef FT_H
# define FT_H

#include <stdlib.h>

void	ft_print_board(int **board, int size);
int	**ft_board(char **argv, int size);
int	ft_solve(int **board, int size, int pos);
int	ft_check(int **board, int size, int value, int pos);
int	ft_row_check(int *row, int size, int value);
int	ft_col_check(int **board, int y, int size, int value);
void	ft_pre_solve(int **board, int size);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);


#endif
