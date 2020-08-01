
#ifndef FCNTL_H
# define FCNTL_H

#include "ft.h"

int	do_op(int a, char *oper, int b);
int	ft_add(int a, int b);
int	ft_sub(int a, int b);
int	ft_mul(int a, int b);
int	ft_div(int a, int b);
int	ft_mod(int a, int b);
int	ft_usage(int a, int b);
void	ft_calc(int a, int b, int(*f)(int, int));

typedef struct s_opp
{
	char *op;
	int(*f)(int, int);
}t_opp;

#endif
