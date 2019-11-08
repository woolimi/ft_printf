#include "./include/ft_printf.h"

void test_p(void)
{
	char *null_s = 0;

	ft_printf("##### conversion p #####\n");
	ft_printf("\n1. test null\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%p|", null_s));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%p|", null_s));

	ft_printf("\n2. test smple s\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%p|", "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%p|", "simple text"));

	ft_printf("\n3. test min width\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%1p|", "hi"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%1p|", "hi"));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%12p|", ""));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%12p|", ""));

	ft_printf("\n4. test minus\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-4p|", "hi"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-4p|", "hi"));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-12p|", ""));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-12p|", ""));

	ft_printf("\n5. test precision <-- not defined\n");

	ft_printf("\n6. test star\n");
	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%*p|", 20, "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%*p|", 20, "simple text"));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-*p|", 20, "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-*p|", 20, "simple text"));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-*p|", -14, "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-*p|", -14, "simple text"));

	write(1, "----- ft_print -----\n", 21);
	printf("\n%d\n", ft_printf("|%-*p|", 014, "simple text"));
	write(1, "----- original -----\n", 21);
	printf("\n%d\n", printf("|%-*p|", 014, "simple text"));

	ft_printf("\n7. test zpad <-- undefined\n");
}