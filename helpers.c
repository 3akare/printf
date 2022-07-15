#include "main.h"

/**
 * print_character - prints out a character (%c)
 * @list: list of arguments
 *
 * Return: Always successfully
 */

int print_character(va_list list)
{
	_putchar(va_arg(list, int));

	return (1);
}
