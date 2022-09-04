#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	count;
	
	count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	printf("le nombre de caracteres de ma chaine est %d", count);
	return (count);
}

int	main()
{
	char	*a;
	
	a = "abcdefghijklmnopqrstuvwxyz";
	ft_strlen(a);
	return (0);
}
