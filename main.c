#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("%r", "\nThis sentence is retrieved from va_args!");
	len2 = printf("!sgra_av morf deveirter si ecnetnes sihT\n");
	fflush(stdout);
	printf("%d%d", len, len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}