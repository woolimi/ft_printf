#include "./include/ft_printf.h"
#include <stdio.h>
#include <unistd.h>

/*
** conversions : c s p d i u x X %
** c : charactor
** s : string
** p : pointer
** d : int(base 10)
** i : int(auto detect base)
** u : unsigned int
** x : int -> hex
** X : int -> HEX
**
** flags : - 0 . *
** - : arrange to left
** 0 : fill up 0 if there is space
*/

/*
** precision
** zero
** minus
** star
*/

void test_c(void);
void test_s(void);

int main(void)
{
	char *null_s = 0;
	ft_printf("test printf\n");
	test_c();
	test_s();

	return (0);
}