//insert 42 header here
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	*swap;
	
	*swap = *a;
	*a = *b;
	*b = *swap;
}
/* 
#include <stdio.h>
int	main()
{
	int	a;
	int	b;
	int	swap;

	a = 1;
	b = 2;
	
	printf("a = %d", a);
	printf("b = %d", b);
	ft_swap(&a, &b);
	printf("a = %d", a);
	printf("b = %d", b);
	return(0);
}
*/	
