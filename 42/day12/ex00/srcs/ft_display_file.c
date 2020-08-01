
#include "unistd.h"
#include "fcntl.h"

int	ft_print_file(char *file_name)
{
	int	fd;
	char	buf;

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
		return (0);
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (!ft_print_file(argv[1]))
		write(2, "error when trying to open/read or close the file\n", 49);
	return (0);
}
