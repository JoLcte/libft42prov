#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(int ac, char **av)
{
	unsigned char truc_exp[] = "abcdefghijk";
	unsigned char truc_test[] = "abcdefghijk";
	if (ac == 3)
	{
		memset(truc_exp, atoi(av[1]), atoi(av[2]));
		ft_memset(truc_test, atoi(av[1]), atoi(av[2]));
		printf("\nFirst parameter of memset : abcdefghijk\n");		
		printf("Expected result : %s\n", truc_exp);
		printf("Your result : %s\n\n", truc_test);
	}
	return (0);
}
