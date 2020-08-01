#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	is_word(char *str, int i)
{
	if (!is_separator(str[i]))
	{
		if (i == 0)
			return (1);
		if (is_separator(str[i - 1]))
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*str;
	int	word;
	int	i;
	
	i = 0;
	if (argc != 2)
	{
		ft_putstr("\n");
		return (0);
	}
	str = argv[1];
	while (str[i])
	{
		if (is_word(str, i))
			word = i;
		i++;
	}
	while(str[word] && !is_separator(str[word]))
	{
		ft_putchar(str[word]);
		word++;
	}
	ft_putchar('\n');
	return (0);
}
