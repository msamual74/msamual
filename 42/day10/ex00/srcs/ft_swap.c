
void	ft_swap(int *a, int *b)
{
	int tmp;
	
	if(a && b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
	}
}
