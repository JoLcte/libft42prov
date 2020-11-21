#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		char **res = ft_split(av[1], *av[2]);
		int	i;

		i = 0;
		while (res[i])
		{
			printf("%s\n", res[i]);
			free(res[i]);
			i++;
		}
		free(res[i]);
		free(res);
	}
	return (0);
}
