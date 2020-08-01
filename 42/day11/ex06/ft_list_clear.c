
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	if (*begin_list && (*begin_list)->next)
		ft_list_clear(&(*begin_list)->next);
	free(*begin_list);
	*begin_list = NULL;
		
}
