#include "main.h"
#include <limits.h>




int main(void)
{
	/*int l = UINT_MAX + 1024;*/
	int len = _printf("%X", UINT_MAX);
	len = _printf("%X", -1024);
	len = _printf("%x", UINT_MAX);
	_printf("%d\n", len);
	return (0);
}