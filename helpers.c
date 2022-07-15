#include "main.h"

/**
 * print_character - prints out a character (%c)
 * @list: a list of arguments
 *
 * Return: 1.
 */

int print_character(va_list list)
{
	_putchar(va_arg(list, int));

	return (1);
}

/**
 * print_string - prints out a string (%s)
 * @list: a list of arguments
 *
 * Return: 1.
 */

int print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * counter - a function that counts characters
 * @n: an unsigned integer
 *
 * Return: Always Successfully
 */

int counter(unsigned int n)
{
	int count = 0;

	unsigned int x, z;

	if (n != 0)
	{
		z = (n / 10);
		x = (n % 10);

		count += counter(z);
		count++;
		_putchar(x + '0');
		return (count);
	}
	return (0);
}


/**
 * print_number - prints out an integer (%d or %i)
 * @list: a list of arguments
 *
 * Return: the length of charcters
 */

int print_number(va_list list)
{
	int a, b = 0;
	unsigned int x;

	a = va_arg(list, int);

	if (a < 0)
	{
		_putchar('-');
		b = 1;
		x = a * (-1);
	}
	else
	{
		x = a;
	}

	if (x > 9)
	{
		return (b + counter(x));
	}
	_putchar(x + '0');
	return (1 + b);
}
