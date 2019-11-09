#include "./include/ft_printf.h"

void test_c(void)
{
	ft_printf("##### conversion c #####\n");

	ft_printf("\n1. test null\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%c|", 0));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%c|", 0));

	ft_printf("\n2. simple\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%c|", 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%c|", 't'));

	ft_printf("\n2. test min width\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%3c|", 0));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%3c|", 0));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%1c|", 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%1c|", 't'));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%5c|", 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%5c|", 't'));

	ft_printf("\n3. test minus\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-1c|", 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-1c|", 't'));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-2c|", 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-2c|", 't'));

	ft_printf("\n4. test star\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*c|", -3, 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*c|", -3, 't'));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-*c|", -3, 't'));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-*c|", -3, 't'));

	ft_printf("\n5. test zpad <-- not defined\n");

	ft_printf("\n6. test c with string\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("hey hey |%c| hihi", 0));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("hey hey |%c| hihi", 0));
}