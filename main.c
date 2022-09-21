#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("%b", -1024);
	len2 = printf("\n11111111111111111111110000000000");
    printf("%d", len);
    printf("%d", len2);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
