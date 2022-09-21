#include "main.h"
/**
 * neg_print_binary - helps print out -ve deimal in
 * binary format
 * @n: an integer
 * @len: an integer
 *
 * Return: the length of characters
 */

int neg_print_binary(int n, int len)
{
	int i = 0;

	n--;
	putchar('1');
	for (i = 0; i < 2; i++)
		len += pos_print_binary(n);
	len += 4;
	return (len);
}

/**
 * pos_print_binary - helps print out +ve decimal in
 * bonary format
 * @n: an integer
 *
 * Return: the length of characters
 */

int pos_print_binary(int n)
{
	int len = 0;

	if (n > 1)
	{
		len++;
		len += print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
	return (len);
}
