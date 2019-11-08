#include "./include/ft_printf.h"

void test_basic(void)
{
	ft_printf("##### basic test #####\n");

	// ft_printf("\n1. test two percent\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%%|"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%%|"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%% %%|"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%% %%|"));

	// ft_printf("\n2. test min_width\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%5%|"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%5%|"));

	// ft_printf("\n3. test minus\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-5%|"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-5%|"));

	printf("%05y\n");
	ft_printf("%05y\n");
}