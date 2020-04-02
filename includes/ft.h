
#ifndef FT_H
# define FT_H

#include <unistd.h>

extern char g_square[9][9];
extern char g_square[9][9];

int	ft_putchar(char c);
void	ft_print(void);
int	ft_valid(int argc, char **argv);
void	ft_square(char **argv);
int	ft_check(int i, int j, char num);
int	ft_solve(int i, int j);
int	checkin(void);
int	ft_rev_solve(int i, int j);
int	ft_rev_check(int i, int j, char num);
int	ft_check_multiple(void);

#endif
