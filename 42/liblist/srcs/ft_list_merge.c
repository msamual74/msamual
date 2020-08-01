
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list **begin_list2)
{
	t_list	*i;

	i = *begin_list1;
	if (i == 0)
	{
		*begin_list1 = *begin_list2;
		return;
	}
	while (i->next)
		i = i->next;
	i->next = *begin_list2;
}
