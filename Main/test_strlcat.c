#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	test_strlcat(char * restrict dst, const char * restrict src, size_t maxlen)
{
	const size_t srclen = strlen(src);
	const size_t dstlen = strnlen(dst, maxlen);
	if (dstlen == maxlen) return maxlen+srclen;
	if (srclen < maxlen-dstlen)
	{
		memcpy(dst+dstlen, src, srclen+1);
	}
	else
	{
		memcpy(dst+dstlen, src, maxlen-1);
		dst[dstlen+maxlen-1] = '\0';
	}
	return dstlen + srclen;
}

int	main(int ac, char **av)
{

	size_t n;

	n = test_strlcat(av[1], av[2], atoi(av[3]));

	if (ac == 4)
	{

		printf("Expt result : %zu\n", n);
		printf("Final string : %s\n", av[1]);
	}
	return (0);
}
