
#include "header.h"

void	head(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==\n");
}

int	print(char *file_name, int num)
{
	int	fd;
	int	count;
	int	start;
	char	buf;

	count = 0;
	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (errno);
	while (read(fd, &buf, sizeof(buf)))
		count++;
	if (num > 0)
		start = num;
	else
		start = count + num;
	close(fd);
	head(file_name);
	fd = open(file_name, O_RDONLY);
	count = 0;
	while (read(fd, &buf, sizeof(buf)))
	{
		if (count >= start)
			write(1, &buf, 1);
		count++;
	}
	close(fd);
	return (0);
}

void	print_files(t_list *names, int num)
{
	int	error;

	while (names)
	{
			error = print(names->data, num);
		if (error == 13)
		{
			print_error("tail: cannot open '");
			print_error(names->data);
			print_error("' for reading: Permission denied\n");
		}
		else if (error == 2)
		{
			print_error("tail: cannot open '");
			print_error(names->data);
			print_error("' for reading: No such file or directory\n");
		}
		else if (errno == 21)
		{
			print_error("tail: error reading '");
			print_error(names->data);
			print_error("': Is a directory\n");
		}
		names = names->next;
	}
}
