
#include "header.h"

int     compare(char *str)
{
        if (str[0] == '-' && str[1] == 'C')
        {
                if (str[2] == '\0')
                        return (1);
                else
                        return (-1);
        }
        return (0);
}

int    find_option(t_list **names)
{
        t_list *i;

        i = *names;
        while (i)
        {
                if (compare(i->data) == -1)
			return (-1);
                else if (compare(i->data) == 1)
			return (1);
                i = i->next;
        }
        return (0);
}


int	main(int argc, char **argv)
{
	t_list	*names;
	int	option;

	if (argc < 2)
		return (0);
	names = NULL;
	names = ft_list_push_params(argc - 1, &argv[1]);
	ft_list_reverse(&names);
	option = find_option(&names);
	ft_list_remove_if(&names, "-C", ft_strcmp);
	while(names)
	{
		ft_putstr(names->data);
		ft_putchar('\n');
		names = names->next;
	}
	return (option);
}
