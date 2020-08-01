
int	ft_strlen(char *str)
{
	int res;

	res = 0;
	while(*str)
	{
		res++;
		str++;
	}
	return (res);
}
