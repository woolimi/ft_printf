#include "./include/ft_printf.h"

void test_x(void)
{
	ft_printf("##### conversion x #####\n");
	ft_printf("\n1. test unsigned int min to unsigned int max\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%X|", 0));
	printf("\n%d\n", ft_printf("|%x|", 0));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%X|", 0));
	printf("\n%d\n", printf("|%x|", 0));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%X|", -1));
	printf("\n%d\n", ft_printf("|%x|", -1));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%X|", -1));
	printf("\n%d\n", printf("|%x|", -1));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%X|", -2147483647));
	printf("\n%d\n", ft_printf("|%x|", -2147483647));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%X|", -2147483647));
	printf("\n%d\n", printf("|%x|", -2147483647));

	ft_printf("\n2. test min width\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%2X|", 123));
	printf("\n%d\n", ft_printf("|%2x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%2X|", 123));
	printf("\n%d\n", printf("|%2x|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%10X|", 123));
	printf("\n%d\n", ft_printf("|%10x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%10X|", 123));
	printf("\n%d\n", printf("|%10x|", 123));

	ft_printf("\n2. test minus\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-2X|", 123));
	printf("\n%d\n", ft_printf("|%-2x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-2X|", 123));
	printf("\n%d\n", printf("|%-2x|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10x|", 123));

	ft_printf("\n5. test precision\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%.x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%.x|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%.6x|", 21474));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%.6x|", 21474));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%2.5x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%2.5x|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10.5x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10.5x|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10.11x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10.11x|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10.100x|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10.100x|", 123));

	ft_printf("\n6. test star\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.4x|", 20, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.4x|", 20, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.4x|", -20, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.4x|", -20, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.*x|", -20, 10, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.*x|", -20, 10, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.*x|", 20, -10, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.*x|", 20, -10, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-*.*x|", 20, -10, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-*.*x|", 20, -10, 12345));

	ft_printf("\n7. test zpad\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%010x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%010x|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%03x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%03x|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%030x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%030x|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%010.5x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%010.5x|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%09.6x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%09.6x|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%08.6x|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%08.6x|", 12345));
}