
#ifndef FT_H
# define FT_H

#include <stdlib.h>

void	ft_print_board(int **board, int size);
int	**ft_board(char **argv, int size);
int	ft_solve(int **board, int size, int pos);
int	ft_check(int **board, int size, int value, int pos);
int	ft_check2(int **board, int size, int value, int pos);
int	ft_row_check(int *row, int size, int value);
int	ft_col_check(int **board, int y, int size, int value);
int	ft_definitely(int **board, int size);
int	ft_solve_for_max(int **board, int size, int pos);
int	to_the_left(int *row, int size, int value, int y);
int	to_the_right(int *row, int size, int value, int y);
int	upper(int **board, int y, int size);
int	below(int **board, int y, int size);
int	ft_row(int *row, int size, int value);
int	ft_col(int **board, int y, int size, int value);
void	ft_pre_solve(int **board, int size);
void	ft_min(int **board, int size);
void	ft_is_max(int **board, int size, int x, int y);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);


#endif
