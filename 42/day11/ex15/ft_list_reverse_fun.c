
#include "ft_list.h"

void	ft_list_swap(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*cur;
	t_list	*rev;
	int	size;
	int	i;

	if (!begin_list)
		return ;
	cur = begin_list;
	i = -1;
	while (++i < size)
	{
		rev = ft_list_at(begin_list, size);
		ft_list_swap(cur, rev);
		cur = cur->next;
		size--;
	}
}
