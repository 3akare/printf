#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer
 * Return: the length of the integer
 */

int print_number(int n)
{
	unsigned int num = n;
	unsigned int len = 0;

	if (n < 0)
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

/**
 * _puts - prints out a string
 * @s: a string
 * Return: the lenght of the string
 */

int _puts(char *s)
{
	int len = 0;

	while (*s)
	{
		putchar(*s++);
		len++;
	}
	return (len);
}
/**
 * search - looks for non-specifiers
 * @c: a character
 * Return: 2 on success and 0 on fail
 */

int search(char c)
{
	int i = 0;
	char arr[] = "aefghjKlmonpqrtuvwxyz%!";

	for (i = 0; arr[i]; i++)
	{
		if (c == arr[i] || c == (arr[i] + 32))
		{
			putchar('%');
			if (c == '%')
				return (1);
			putchar(c);
			return (2);
		}
	}
	return (0);
}

/**
 * print_binary - prints out an integer in binary format
 * @n: an integer
 * Return: the length of the integer in binary format
 */

int print_binary(int n)
{
	int len = 0;

	if (n < 0)
	{
		n *= -1;
		len += neg_print_binary(n, len);
	}
	len += pos_print_binary(n);
	return (len);
}
