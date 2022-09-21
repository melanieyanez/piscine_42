
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;

	res = malloc(get_malloc_size(size, strs, sep) * sizeof(char));
	if (!res)
		return (NULL);
	res[0] = 0;
	if (size == 0)
		return (res);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i]);
		if (i != size - 1)
			ft_strcat(res, sep);
		i++;
	}
	res[ft_strlen(res)] = 0;
	return (res);
}

int	main(void)
{
	char *strs[4];
	int	size = 4;
	char *sep = "1234";
	int i;

	strs[0] = "lol";
	strs[1] = "pouic";
	strs[2] = "";
	strs[3] = "youpiiiii";

	printf("%d\n", ft_strlen("absc"));
	char *dest = ft_strjoin(size, strs, sep);
	i = 0;
	while (dest[i] != '\0')
	{
		printf("%c\n", dest[i]);
		i ++;
	}
}
