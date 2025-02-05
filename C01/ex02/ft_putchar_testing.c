#include <unistd.h>

void    ft_putchar(char *message)
{   
	while (*message)
        {
		write(1, message++, 1);
	}
}

int	main(void)
{
	ft_putchar("whatever i want to write here");
	return	(0);
}}
