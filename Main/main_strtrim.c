#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char *res = ft_strtrim(av[1], av[2]);
		printf("%s\n", res);
		free(res);
	}
	return (0);
}
