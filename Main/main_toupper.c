#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("\nyour result : %d\n", ft_toupper(atoi(av[1])));
		printf("expected result : %d\n", toupper(atoi(av[1])));
	}
	return (0);
}
