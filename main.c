#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("%b", UINT_MAX);
	len2 = printf("0");
    _printf("%d\n", len);
    _printf("%d\n", len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}