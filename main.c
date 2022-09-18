#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("iddi%diddiiddi\n", 1024);
	len2 = printf("iddi%diddiiddi\n", 1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}