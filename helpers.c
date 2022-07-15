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
