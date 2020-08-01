
#include <unistd.h>

void	ft_generic(void)
{
	write(1, "Tu tu tu tu ; Tu tu tu tu\n", 26);
}

int	main()
{
	ft_generic();
	return (0);
}
