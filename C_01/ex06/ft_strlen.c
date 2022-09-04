#include <stdio.h>

int     ft_strlen(char *str)
{
        int	count;

        count = 0;
        while (*str != '\0')
        {
		str++;
		count++;
        }
        printf("Le nombre de caracteres est %d\n", count);
	return (count);
}


int     main()
{
        char   *a;

        a = "Melanie";
        ft_strlen(a);
        return (0);
}

