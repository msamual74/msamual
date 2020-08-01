
#include "ft_list.h"

t_list	*ft_list_find(t_list **begin_list, void *data_ref, int(*cmp)())
{
	t_list *i;

	i = *begin_list;
	while (i)
	{
		if ((*cmp)(i->data, data_ref) == 0)
			return (i);
		i = i->next;
	}
	return (NULL);
}
