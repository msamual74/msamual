
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *res;

	res = begin_list;
	while (nbr > 1)
	{
		if(res->next)
		{
			res = res->next;
			nbr--;
		}
		else
			return (NULL);
	}
	return (res);
}

