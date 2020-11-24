#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		printf("\nYour result : %d", ft_strncmp(av[1], av[2], atoi(av[3])));
		printf("\nExpt result : %d", strncmp(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
