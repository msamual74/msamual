
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *i;

	i = *begin_list;
	while (i && i->next)
	{
		if ((*cmp)(i->next->data, data_ref) == 0)
		{
			tmp = i->next->next;
			free(i->next);
			i->next = tmp;
		}
		i = i->next;
	}
}