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

/**
 * unsigned_print_number - prints an unsigned integer
 * @n: an integer
 * Return: the length of the integer
 */

int unsigned_print_number(unsigned int n)
{
	unsigned int num = n;
	unsigned int len = 0;

	if (n <= 0)
	{
		putchar('-');
		num *= -1;
		len++;
	}
	if ((num / 10) > 0)
	{
		len++;
		len += print_number(num / 10);
	}
	putchar((num % 10) + '0');
	return (len);
}
