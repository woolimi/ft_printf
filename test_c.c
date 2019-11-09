#include <stdio.h>
#include <unistd.h>

int ft_printf(const char *form, ...);

void test_c(void)
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
	printf("******************** Test conversion c :\n\n\n");
	printf("\033[0m;");

	printf("\033[0;36m======================= TEST\033[0m 1    %%%%\n");
	i = printf("|%c|\n", 0);
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%c|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 2    %%%%\n");
	i = printf("|%c|\n", 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%c|\n", 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 3    %%%%\n");
	i = printf("|%3c|\n", 0);
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%3c|\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 4    %%%%\n");
	i = printf("|%1c|\n", 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%1c|\n", 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 5    %%%%\n");
	i = printf("|%5c|\n", 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%5c|\n", 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 6    %%\n");
	i = printf("|%-1c|\n", 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%-1c|\n", 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 7    %%\n");
	i = printf("|%-2c|\n", 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%-2c|\n", 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 8    %%\n");
	i = printf("|%*c|\n", -3, 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%*c|\n", -3, 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 9    %%\n");
	i = printf("|%-*c|\n", -3, 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%-*c|\n", -3, 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 10    %%\n");
	i = printf("|%*c|\n", -3, 't');
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("|%*c|\n", -3, 't');
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[0;36m======================= TEST\033[0m 11    %%\n");
	i = printf("hey hey |%c| hihi\n", 0);
	fflush(stdout);
	printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
	i = ft_printf("hey hey |%c| hihi\n", 0);
	printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);
}