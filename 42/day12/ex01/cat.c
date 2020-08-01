
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

void	display_input()
{
	char c;

	while (read(0, &c, sizeof(c)))
		write(1, &c, sizeof(c));
}

void	error_message(char *name, char *message)
{
	write(2, "ft_cat: ", 8);
	while (*name)
		write(2, name++, 1);
	write(2, ": ", 2);
	while (*message)
		write(2, message++, 1);
}

int	print_file(char *name)
{
	int	fd;
	char	buf;

	fd = open(name, O_RDONLY);
	if (fd < 0)
		return(errno);
	while (read(fd, &buf, sizeof(buf)) > 0)
		write(1, &buf, sizeof(buf));
	close(fd);
	return (0);
}

void	treat_file(char *file_name)
{
	int error_number;

	if (file_name[0] == '-' && file_name[1] == '\0')
		display_input();
	else
	{
		error_number = print_file(file_name);
		if (error_number == 13)
			error_message(file_name, "Permission denied\n");
		else if (error_number == 2)
			error_message(file_name, "No such file or directory\n");
		else if (errno == 21)
			error_message(file_name, "Is a directory\n");
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 1)
		display_input();
	else
		while (++i < argc)
			treat_file(argv[i]);
	return (0);
}
