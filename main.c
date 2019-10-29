#include "./include/ft_printf.h"
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%p|", 1));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%p|", ""));
	return (0);
}