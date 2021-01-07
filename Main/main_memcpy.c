#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int	main(void)
{
	void *pdst = NULL;
	void *psrc = "lalala";
	//void *pdst2 = NULL;
	//void *psrc2 = NULL;

	//printf("Real result : %s\n", memcpy(pdst2, psrc2, 2));
	printf("Your result : %s\n", ft_memcpy(pdst, psrc, 2));
	return (0);
}
