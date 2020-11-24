#include <stdio.h>
#include <string.h>

int     main(int ac, char **av)
{
        char *res;
        char *test;
        if (ac == 3)
        {
                res = ft_strdup(av[1]);
                test = strdup(av[2]);
                printf("\nYour result : %s\n", res);
                printf("Expt result : %s\n", test);
                free(res);
                free(test);
        }
        return (0);
}
