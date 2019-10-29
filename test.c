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

// void	test(char *form, ...)
// {
// 	va_list ap;

// 	va_start(ap, form);
// 	int res = va_arg(ap, int);
// 	printf("%d\n", res);
	
// 	int res2 = va_arg(ap, int);
// 	printf("%sd\n", res2);
// 	va_end(ap);
// }

int	main(void)
{
	// conversions : c s p d i u x X %
/*
	// 1. minimun width
	printf("--%3c--\n", 'c');
	printf("--%3s--\n", "hi");
	printf("--%20p--\n", "hi");
	printf("ret : %d\n", printf("--%*d--\n", 4, 10)); // res --  10--
	printf("--%4d--\n", 10); // res --  10--
	printf("--%4i--\n", 10); // res --  10--
	printf("--%4u--\n", 10); // res --  10--
	printf("--%4x--\n", 0xab); // res --  10--
	printf("--%4X--\n", 0xab); // res --  10--
	// 2. arrangement
	printf("--%-4d--\n", 10); // res --10  --
	// 3. zero padding
	printf("--%04d--\n", 10); // res --0010--
	printf("--%04x--\n", 10); // res ==000a--
	printf("--%-010s--\n", "padding?");
*/
	// 4. precision
	// printf("--%.5d--\n", 1234); //minimal nb of digit to be writte
	// printf("--%10.5d--\n", 1234);  // res --     01234--
	// // minimun width + minimun nb of digit
	// printf("--%2.01d--\n", 123);
	// //점 앞의 숫자는 최소 공간을 의미함
	// //최소 5개의 숫자를 표시한다. 5개가 안되면 0으로 채운다.
	// printf("--%4.8s--\n", "hel"); // res -- hel--
	// // minimun width : 4, maximun width : 8, if bigger than max, crop it.
	
	//5. star
	printf("res = |%.1c|\n", 'a'); // 10개의 자리에 최소 3개의 숫자를 표현s
	return (0);
}
