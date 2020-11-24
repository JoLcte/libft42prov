#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("\nYour result : %d\n", ft_atoi(av[1]));
		printf("Expt result : %d\n", atoi(av[1]));
	}
	return (0);
}
