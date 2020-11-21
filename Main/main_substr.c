#include <stdio.h>
#include <stdlib.h>

int     main(int ac, char **av)
{
        char *res;
        if (ac == 4)
        {
                res = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
                printf("%s\n", res);
                free(res);
        }
        return (0);
}
