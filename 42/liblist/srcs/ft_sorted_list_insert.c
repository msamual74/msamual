
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *list;
	t_list *new;

	list = *begin_list;
	if (!list)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (list->next && (*cmp)(data, list->next->data) > 0)
		list = list->next;
	new = ft_create_elem(data);
	new->next = list->next;
	list->next = new;
}
