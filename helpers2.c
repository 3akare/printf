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

/**
 * rot13 - prints out a string int rots13 format
 * @str: a string
 *
 * Return: the number of characters
 */

int rot13(char *str)
{
	int i = 0, j = 0;
	char alpha1[13] = "abcdefghijklm";
	char alpha2[13] = "nopqrstuvwxyz";

	while (str[i])
	{
		for (j = 0; j <= 12; j++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] == (alpha1[j] - 32))
					str[i] = (alpha2[j] - 32);
				else if (str[i] == (alpha2[j] - 32))
					str[i] = (alpha1[j] - 32);
			}
			else if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] == alpha1[j])
					str[i] = alpha2[j];
				else if (str[i] == alpha2[j])
					str[i] = alpha1[j];
			}
		}
		i++;
	}
	_puts(str);
	return (i);
}

/**
 * reverse_string - prints a string in reverse
 * @str: a string
 *
 * Return: the length of a string
 */

int reverse_string(char *str)
{
	int i = 0;
	int len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		putchar(str[len - i]);
	}
	len -= 1;
	return (len);
}
