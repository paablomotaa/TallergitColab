#include <unistd.h>

int	ft_putstr(char *c)
{
	int i;

	i = 0;
	while(c[i])
	{
		write(1, &c, 1);
		i++;
	}
	return i;
}
