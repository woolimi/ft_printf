#include <stdio.h>
#include <stdarg.h>

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

void	test(char *form, ...)
{
	va_list ap;

	va_start(ap, form);
	int res = va_arg(ap, int);
	printf("%d\n", res);
	
	int res2 = va_arg(ap, int);
	printf("%d\n", res2);
	va_end(ap);
}

int	main(void)
{
	// conversions : c s p d i u x X %

	// 1. minimun width
	printf("--%c--\n", 'c');
	printf("ret : %d\n", printf("--%*d--\n", 4, 10)); // res --  10--
	printf("--%4d--\n", 10); // res --  10--
	// 2. arrangement
	printf("--%-4d--\n", 10); // res --10  --
	// 3. zero padding
	printf("--%04d--\n", 10); // res --0010--
	printf("--%04x--\n", 10); // res ==000a--
	// 4. precision
	printf("--%.5d--\n", 1234); //minimal nb of digit to be writte
	printf("--%10.5d--\n", 1234);  // res --     01234--
	// minimun width + minimun nb of digit
	printf("--%0.5d--\n", 0); //minimal nb of digit to be writte
	printf("--%4.8s--\n", "hel"); // res -- hel--
	// minimun width : 4, maximun width : 8, if bigger than max, crop it.

	test("", "testttt", "test");
	return (0);
}
