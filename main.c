#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("%r", "\nThis sentence is retrieved from va_args!");
	len2 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
    _printf("%d\n", len2 + len);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}