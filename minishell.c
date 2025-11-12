#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	printf("Hola Mundo!");
	return (0);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
