
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp;
	t_list *prev;
	t_list *current;

	prev = NULL;
	current = *begin_list;
	while (current)
	{
		tmp = current->next;
		current->next = prev;
		prev = current;
		current = tmp;
	}
	*begin_list = prev;
}
