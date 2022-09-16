#include <unistd.h>

void	ft_hello(void)
{
	write(1,"Hello World!\n" , 14);
}

int	main()
{
	ft_hello();
	return (0);
}


