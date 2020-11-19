#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int ac, char ** av)
{
	if (ac == 3)
	{
		printf("\nyour result : %s\n", ft_strchr(av[1], atoi(av[2])));
		printf("expected result : %s\n", strchr(av[1], atoi(av[2])));
	}
	return (0);
}
