#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int ac, char **av)
{

	size_t n;

	n = ft_strlcat(av[1], av[2], atoi(av[3]));

	if (ac == 4)
	{
		printf("Your result : %zu ||| %s \n", n, av[1]);
	}
	return (0);
}
