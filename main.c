#include "./include/ft_printf.h"
#include <stdio.h>
#include <unistd.h>

/*
** conversions : c s p d i u x X %
** c : charactor
** s : string
** p : pointer
** d : int(base 10)
** i : int(auto detect base)
** u : unsigned int
** x : int -> hex
** X : int -> HEX
**
** flags : - 0 . *
** - : arrange to left
** 0 : fill up 0 if there is space
*/

/*
** precision
** zero
** minus
** star
*/

int main(void)
{
	char *null_s = 0;
	ft_printf("test printf\n");

	ft_printf("##### conversion c #####\n");

	// ft_printf("\n1. test null\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%c|", 0));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%c|", 0));

	// ft_printf("\n2. simple\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%c|", 't'));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%c|", 't'));

	ft_printf("##### conversion s #####\n");

	ft_printf("\n1. test null\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%s|", null_s));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%s|", null_s));

	ft_printf("\n2. test only s\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%s|", "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%s|", "simple text"));

	ft_printf("\n3. test min width <= len\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%5s|", "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%5s|", "simple text"));

	ft_printf("\n4. test min width > len\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%12s|", "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%12s|", "simple text"));

	ft_printf("\n5. test min width with null\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%12s|", null_s));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%12s|", null_s));

	return (0);
}