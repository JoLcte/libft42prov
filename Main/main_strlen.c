#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s)
{
	size_t count;

	count = 0;
	while (*s++)
		count++;
	return (count);
}

int	main(void)
{
	//char *s = NULL;
	char *s2 = NULL;

	//size_t res = ft_strlen(s);
	size_t rres = strlen(s2);
	//printf("Your result : %zu\n", res);
	printf("Real result : %zu\n", rres);
	return (0);
}
