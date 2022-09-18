#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("%!\n");
	len2 = printf("%!\n");
	fflush(stdout);
    _printf("%d\n", len);
    printf("%d\n", len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}