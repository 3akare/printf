#include "main.h"
#include <limits.h>


int main(void)
{
	/* int len, len2; */
	long int l = UINT_MAX;

	l += 1024;
	_printf("%X", l);
	/*len2 = printf("%X", l);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}*/
	return (0);
}