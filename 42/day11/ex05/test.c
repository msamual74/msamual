
#include "ft_list.h"

int	main(int argc, char **argv)
{
	t_list	*params;
	
	params = ft_list_push_params(argc, argv);
	ft_list_reverse(&params);
	ft_list_sort(&params, ft_strcmp);
	ft_list_remove_if(&params, "-test1", ft_strcmp);
	while (params)
	{
		ft_putstr(params->data);
		ft_putchar('\n');
		params = params->next;
	}
	return (0);
}
