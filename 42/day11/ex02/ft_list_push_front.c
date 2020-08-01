
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new;
	if (!begin_list)
		return;
	if (*begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		new = ft_create_elem(data);
		new->next = *begin_list;
		*begin_list = new;
	}
}
