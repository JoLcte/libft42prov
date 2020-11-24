#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{
	if (ac == 5)
	{
		size_t n;
		n  = strlcpy(av[4], av[2], atoi(av[3]));
		printf("\nYour result : %zu ||| %s\n", ft_strlcpy(av[1], av[2], atoi(av[3])), av[1]);
		printf("Expt result : %zu ||| %s\n", n, av[4]);
	}
	return (0);
}
