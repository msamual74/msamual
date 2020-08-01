
#include "ft_stock_par.h"

int	ft_is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int	ft_strlen(char *str)
{

	int i;

	i = 0;
	while (!ft_is_separator(str[i]) && str[i] != '\0')
		i++;
	return (i);
}

int	is_word(char *str)
{
	if (!ft_is_separator(*str))
	{
		str--;
		if (ft_is_separator(*str))
			return (1);
	}
	return (0);
}

int	ft_words_count(char *str)
{
	int count;

	count = 0;
	if (!ft_is_separator(*str))
	{
		count++;
		str++;
	}
	while (*str)
	{
		if (is_word(str))
			count++;
		str++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	if ((res = malloc(sizeof(char *) * ft_words_count(str)+1)) == NULL)
		return (NULL);
	while (str[k])
	{
		while(ft_is_separator(str[k]) && str[k] != '\0')
			k++;
		if (str[k])
		{
			res[i] = malloc(sizeof(char) * ft_strlen(&str[k]+1));
			j = 0;
			while (!ft_is_separator(str[k]) && str[k] != '\0')
				res[i][j++] = str[k++];
			res[i++][j] = '\0';
		}
	}
	res[i] = NULL;
	return (res);
}
