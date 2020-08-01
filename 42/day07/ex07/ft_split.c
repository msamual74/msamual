#include <stdlib.h>

int	ft_is_separator(char *charset, char c);

int	ft_strlen(char *str, char *charset)
{

	int i;

	i = 0;
	while (!ft_is_separator(charset, str[i]) && str[i] != '\0')
		i++;
	return (i);
}

int	ft_is_separator(char *charset, char c)
{
	while (*charset != '\0')
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

int	is_word(char *str, char *charset)
{
	if (!ft_is_separator(charset, *str))
	{
		str -= 1;
		if (ft_is_separator(charset, *str))
			return (1);
	}
	return (0);
}

int	ft_words_count(char *str, char *charset)
{
	int count;

	count = 0;
	if (!ft_is_separator(charset, *str))
	{
		count++;
		str++;
	}
	while (*str)
	{
		if (is_word(str, charset))
			count++;
		str++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = -1;
	res = malloc(sizeof(char *) * ft_words_count(str, charset));
	while (str[++k])
	{
		if (is_word(&str[k], charset) || \
				(k == 0 && !ft_is_separator(charset, str[k])))
		{
			res[i] = malloc(sizeof(char) * ft_strlen(str, charset));
			j = 0;
			while (!ft_is_separator(charset, str[k]) && \
					str[k] != '\0')
			{
				res[i][j++] = str[k++];
			}
			res[i][j] = '\0';
			i++;
		}
	}
	res[i] = NULL;
	return (res);
}

int	main(int argc, char **argv)
{
	char **res;

	if (!argc)
		return (1);
	res = ft_split(argv[1], argv[2]);
	while(*res)
	{
		printf("%s\n", *res);
		res++;
	}
	return (0);
}
