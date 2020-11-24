 #include <stdio.h>
 35
 36 int     main(int ac, char **av)
 37 {
 38         if (ac == 3)
 39         {
 40                 char *res  = ft_strjoin(av[1], av[2]);
 41                 printf("%s\n", res);
 42                 free(res);
 43         }
 44         return (0);
 45 }
