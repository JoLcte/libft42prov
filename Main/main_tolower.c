#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("\nYour Result : %d\n", ft_tolower(atoi(av[1])));
		printf("\Expected Result : %d\n", tolower(atoi(av[1])));
	}
	return (0);
}
