#include "main.h"

/**
 * rot13_arg - prints a string in rot13 format
 * @argument: an argument
 *
 * Return: returns the length of a string
 */

int rot13_arg(va_list argument)
{
	char *str;
	int len = 0;

	str = strdup(va_arg(argument, char *));
	len = rot13(str);
	free(str);
	return (len);
}

/**
 * reverse_string_arg - prints a string in reverse
 * @argument: an argument
 *
 * Return: the length of a string
 */

int reverse_string_arg(va_list argument)
{
	char *str;
	int len = 0;

	str = strdup(va_arg(argument, char *));
	len = reverse_string(str);
	free(str);
	return (len);
}
