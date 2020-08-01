
#include "ft_list.h"

void	ft_list_swap(t_list *a, t_list *b)
{
	void *tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

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
