
#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2, \
		int (*cmp)())
{
	t_list *l1;
	t_list *to_insert;

	l1 = *begin_list1;
	if (!l1)
	{
		l1 = begin_list2;
		return ;
	}
	to_insert = begin_list2;
	while (to_insert)
	{
		while (l1->next && (*cmp)(to_insert->data, l1->next->data) > 0)
			l1 = l1->next;
		to_insert = begin_list2->next;
		begin_list2->next = l1->next;
		l1->next = begin_list2;
		begin_list2 = to_insert;
	}
}
