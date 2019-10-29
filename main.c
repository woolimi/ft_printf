#include "./include/ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("\n%d\n", ft_printf("|%-10c|", 'a'));
	return (0);
}