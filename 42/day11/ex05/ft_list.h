
#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>
#include "ft.h"

typedef struct s_list
{
	struct s_list	*next;
	void		*data;
}		t_list;

t_list	*ft_create_elem(void *data);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void    ft_list_remove_if(t_list **begin_list, void *data_ref, int(*cmp)());
t_list  *ft_list_push_params(int ac, char **av);
void	ft_list_push_front(t_list **begin_list, void *data);

#endif
