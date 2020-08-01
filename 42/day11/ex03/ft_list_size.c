
#include "ft_list.h"

int	ft_list_size(t_list **begin_list)
{
	int	count;
	t_list	*i;

	count = 0;
	i = *begin_list;
	while (i)
	{
		count++;
		i = i->next;
	}
	return (count);
}
