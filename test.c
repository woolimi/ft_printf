#include <stdio.h>
#include <stdarg.h>

void	test(char *form, ...)
{
	void *ap;

	va_start((va_list)ap, form);
	int res = va_arg((va_list)ap, int);
	printf("%d", res);
	va_end((va_list)ap);
}

int	main(void)
{
	test("random text", "test");
	return (0);
}
