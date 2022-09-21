#include "main.h"
#include <limits.h>

int main(void)
{
    int len = _printf("%b", -1024);
    int len2 =_printf("11111111111111111111110000000000");
    fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}
