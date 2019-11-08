#include "./include/ft_printf.h"

void test_s(void)
{
	char *null_s = 0;

	// ft_printf("##### conversion s #####\n");
	// ft_printf("\n1. test null\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%s|", null_s));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%s|", null_s));

	// ft_printf("\n2. test empty string\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%s|", ""));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%s|", ""));

	// ft_printf("\n3. test smple s\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%s|", "simple text"));

	// ft_printf("\n3. test min width\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%12s|", null_s));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%12s|", null_s));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%12s|", ""));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%12s|", ""));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%5s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%5s|", "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%12s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%12s|", "simple text"));

	// ft_printf("\n4. test minus\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-12s|", null_s));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-12s|", null_s));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-12s|", ""));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-12s|", ""));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-2s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-2s|", "simple text"));

	// ft_printf("\n5. test precision\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.3s|", null_s));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.3s|", null_s));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.8s|", null_s));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.8s|", null_s));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.7s|", ""));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.7s|", ""));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%20.4s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%20.4s|", "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.s|", "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%10.0s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%10.0s|", "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%6.5s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%6.5s|", "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%20.04s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%20.04s|", "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%-20.4s|", "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%-20.4s|", "simple text"));

	// ft_printf("\n6. test star\n");
	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%*.4s|", 20, "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%*.4s|", 20, "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%15.*s|", 3, "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%15.*s|", 3, "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%.*s|", -1, null_s));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%.*s|", -1, null_s));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%30.5*s|", -1, "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", ft_printf("|%30.5*s|", -1, "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%1.*s|", -12, "simple text"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%1.*s|", -12, "simple text"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%14.*s|", -123, "longlonglonglo"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%14.*s|", -123, "longlonglonglo"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%50.*s|", -123, "longlonglonglonglong text long"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%50.*s|", -123, "longlonglonglonglong text long"));

	// write(1, "----- ft_print -----\n", 21);
	// printf("\n%d\n", ft_printf("|%1.*s|", 123, "longlonglonglonglong text long"));
	// write(1, "----- original -----\n", 21);
	// printf("\n%d\n", printf("|%1.*s|", 123, "longlonglonglonglong text long"));

	// ft_printf("\n7. test zpad <-- undefined\n");

}