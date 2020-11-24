#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char *res = ft_itoa(atoi(av[1]));
		printf("your string result : %s", res);
		free(res);
	}
	return (0);
}
