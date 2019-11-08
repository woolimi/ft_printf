#include "./include/ft_printf.h"

void test_d(void)
{
	// ft_printf("##### conversion d #####\n");
	// ft_printf("\n1. test int_min to int_max\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%d|", 2147483647));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%d|", 2147483647));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%d|", -2147483647));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%d|", -2147483647));

	// ft_printf("\n2. test min width\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%2d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%2d|", 123));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%10d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%10d|", 123));

	// ft_printf("\n2. test minus\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-2d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-2d|", 123));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-10d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-10d|", 123));

	// ft_printf("\n5. test precision\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.d|", 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%6d|", 214748));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%6d|", 214748));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%2.5d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%2.5d|", 123));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-10.5d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-10.5d|", 123));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-10.11d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-10.11d|", 123));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-10.100d|", 123));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-10.100d|", 123));

	// ft_printf("\n6. test star\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*.4d|", 20, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*.4d|", 20, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*.4d|", -20, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*.4d|", -20, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*.*d|", -20, 10, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*.*d|", -20, 10, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*.*d|", 20, -10, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*.*d|", 20, -10, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-*.*d|", 20, -10, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-*.*d|", 20, -10, 12345));

	// ft_printf("\n7. test zpad\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%010d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%010d|", 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%03d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%03d|", 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%030d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%030d|", 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%010.5d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%010.5d|", 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%09.6d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%09.6d|", 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%08.6d|", 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%08.6d|", 12345));

	// ft_printf("\n7. test star\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*d|", 25, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*d|", 25, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*d|", -22, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*d|", -22, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.*d|", -22, 12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.*d|", -22, 12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%23.*d|", -22, -12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%23.*d|", -22, -12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*.*d|", -22, 8, -12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*.*d|", -22, 8, -12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-*.*d|", 10, 8, -12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-*.*d|", 10, 8, -12345));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-*.*d|", 6, 8, -12345));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-*.*d|", 6, 8, -12345));
}