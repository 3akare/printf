#include "main.h"
#include <limits.h>




int main(void)
{
	int len = _printf("%u + %u\n", UINT_MAX, INT_MAX);
	_printf("%d\n", len);
	return (0);
}