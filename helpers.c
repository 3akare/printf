#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num -= num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	putchar((num % 10) + '0');
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
	char arr[] = "abefghjklmonpqrtuvwxyz%!";

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
