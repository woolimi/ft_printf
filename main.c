#include "./include/ft_printf.h"
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%10.*s|", 1, "123456789"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%10.*s|", 1, "123456789"));
	return (0);
}