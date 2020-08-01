
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int	i;

	if (ac < 1)
		return (NULL);
	i = 0;
	list = NULL;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}
