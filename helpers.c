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
