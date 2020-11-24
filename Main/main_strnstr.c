#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 4)

	{
		printf("\nYour result : %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
		printf("Expt result : %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
	}
	return (0);
}
