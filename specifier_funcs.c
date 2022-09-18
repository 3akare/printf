#include "main.h"

/**
 * print_integer - prints an integer
 * @argument: an argument
 * Return: returns 2 on success
 */

int print_integer(va_list argument)
{
	int number = va_arg(argument, int);

	print_number(number);
	return (2);
}

/**
 * print_string - prints a string
 * @argument: an argument
 * Return: returns the len of a string
 */

int print_string(va_list argument)
{
	char *str;
	int len = 0;

	str = strdup(va_arg(argument, char *));
	len = _puts(str);
	free(str);
	return (len);
}

/**
 * print_character - prints a character
 * @argument: an argument
 * Return: return 1 on success
 */

int print_character(va_list argument)
{
	char letter = va_arg(argument, int);

	putchar(letter);
	return (1);
}
