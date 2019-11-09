#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *form, ...);

void test_u(void)
{
	ft_printf("##### conversion u #####\n");
	ft_printf("\n1. test unsigned int min to unsigned int max\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%u|", 0));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%u|", 0));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%u|", -1));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%u|", -1));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%u|", -2147483647));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%u|", -2147483647));

	ft_printf("\n2. test min width\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%2u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%2u|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%10u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%10u|", 123));

	ft_printf("\n2. test minus\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-2u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-2u|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10u|", 123));

	ft_printf("\n5. test precision\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%.u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%.u|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%.6u|", 21474));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%.6u|", 21474));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%2.5u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%2.5u|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10.5u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10.5u|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10.11u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10.11u|", 123));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-10.100u|", 123));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-10.100u|", 123));

	ft_printf("\n6. test star\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.4u|", 20, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.4u|", 20, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.4u|", -20, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.4u|", -20, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.*u|", -20, 10, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.*u|", -20, 10, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*.*u|", 20, -10, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*.*u|", 20, -10, 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-*.*u|", 20, -10, 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-*.*u|", 20, -10, 12345));

	ft_printf("\n7. test zpad\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%010u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%010u|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%03u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%03u|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%030u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%030u|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%010.5u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%010.5u|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%09.6u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%09.6u|", 12345));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%08.6u|", 12345));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%08.6u|", 12345));
}