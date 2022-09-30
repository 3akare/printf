#include "main.h"
#include <limits.h>




int main(void)
{
	/*int l = UINT_MAX + 1024;*/
	int len = _printf("%u", -1024);
	_printf("uuoxxX%xuoXo\n", 1024);
	_printf("%u == %o == %x == %X\n", 1024, 1024, 1024, 1024);
	_printf("%d", len);
	return (0);
}