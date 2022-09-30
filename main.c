#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len = 0;
	len = _printf("%p", (void*)0x7fff5100b608);
	_printf("%d\n", len);
	return (0);
}