#include "main.h"
#include <limits.h>




int main(void)
{
	int len = _printf("%X%x%o\n", 12, 12, 12);
	_printf("%d\n", len);
	len = printf("%X%x%o\n", 12, 12, 12);
	printf("%d\n", len);
	return (0);
}