#include "main.h"

/**
 * convert - convert integers to a defined number base
 * @num: an integer
 * @base: the required base
 * Return: char*
 */

char *convert(long int num, int base)
{
	static const char rep[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
