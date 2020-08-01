
#include "header.h"

void	print_error(char *str)
{
	while (*str)
		write(2, str++, 1);
}

int	compare(char *str)
{
	if (str[0] == '-' && str[1] == 'c')
	{
		if (str[2] == '\0')
			return (2);
		else
			return (1);
	}
	return (0);
}

int	check_num(char *str)
{
	char *buf;

	buf = str;
	if (*str == '-' || *str == '+')
		str++;
	while (*str)
	{
		if (*str < 48 || *str > 57)
		{
			print_error("tail: invalid number of bytes: `");
			print_error(buf);
			print_error("`\n");
			return (0);
		}
		str++;
	}
	return (1);
}

char	*find_option(t_list **names)
{
	t_list *i;
	t_list *prev;

	i = *names;
	prev = NULL;
	while (i)
	{
		if (compare(i->data) == 1)
		{
			if (prev)
				prev->next = i->next;
			else
				*names = i->next;
			return (i->data + 2);
		}
		else if (compare(i->data) == 2)
		{
			if (prev)
				prev->next = i->next->next;
			else
				*names = i->next->next;
			return (i->next->data);
		}
		prev = i;
		i = i->next;
	}
	return (NULL);
}

int	main(int argc, char **argv)
{
	t_list	*names;
	char	*num_of_bytes;
	int	num;

	if (argc < 2)
		return (0);
	names = NULL;
	names = ft_list_push_params(argc - 1, &argv[1]);
	ft_list_reverse(&names);
	num_of_bytes = find_option(&names);
	if (!check_num(num_of_bytes))
		return (1);
	num = ft_atoi(num_of_bytes);
	(num_of_bytes[0] == '+') ? (num *= 1) : (num *= -1);
	print_files(names, num);
	return (0);
}
