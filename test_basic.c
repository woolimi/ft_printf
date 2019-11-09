#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *form, ...);

void test_basic(void)
{
	int i;
	i = 0;

	char string[] = "string";

	void *ptr_1;
	char *ptr_2;
	int *ptr_3;
	void *ptr_null;
	char c;

	ptr_1 = string;

	ptr_null = NULL;

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** Basic test :\n\n\n");
	printf("\033[0m;");

	printf("\033[0;36m======================= TEST\033[0m 1    %%%%\n");
	i = printf("|%%|\n");
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%%|\n");
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 2    %% %%\n");
	i = printf("|%% %%|\n");
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%% %%|\n");
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 3    %%5%%\n");
	i = printf("|%5%|\n");
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%5%|\n");
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 4    %%-5%%\n");
	i = printf("|%-5%|\n");
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%-5%|\n");
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** (TRIKY > precision 0 padding 0 value 0) :\n\n\n");
	printf("\033[0m;");

	printf("\033[0;36m======================= TEST\033[0m 1    %%d = 0\n");
	i = printf("|ok %.0d|\n", 0);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.0d|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 2    %%d = 0\n");
	i = printf("|ok %.d|\n", 0);
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.d|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 3    %%i = 0\n");
	i = printf("|ok %.0i|\n", 0);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.0i|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 4    %%u = 0\n");
	i = printf("|ok %.0u|\n", 0);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.0u|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 5    %%x = 0\n");
	i = printf("|ok %.x|\n", 0);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.x|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 6    %%X = 0\n");
	i = printf("|ok %.X|\n", 0);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.X|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 7    %%p = null\n");
	i = printf("|ok %.p|\n", ptr_null);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.p|\n", ptr_null);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 8    %%p = null  padding 3\n");
	i = printf("|ok %3.p|\n", ptr_null);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %3.p|\n", ptr_null);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 9    %%p = null  padding 5(undefined)\n");
	i = printf("|ok %05.p|\n", ptr_null);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %05.p|\n", ptr_null);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 10    %%c = 0\n");
	i = printf("|ok %c|\n", 0);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %c|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 11    %%c = 9\n");
	i = printf("|ok %.c|\n", 9);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.c|\n", 9);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 12    %%c = '@'\n");
	i = printf("|ok %.c|\n", '@');
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.c|\n", '@');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 13    %%s = 'string'\n");
	i = printf("|ok %.s|\n", string);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.s|\n", string);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 14    %%s = (null)\n");
	i = printf("|ok %.s|\n", ptr_null);
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.s|\n", ptr_null);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 15    k = other(undefined)\n");
	i = printf("|ok %.k|\n");
		fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|ok %.k|\n");
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);
}