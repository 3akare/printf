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

/**
 * octal_arg - prints an int in octal format
 * @argument: an argument
 * Return: return len of int in octal format
 */

int octal_arg(va_list argument)
{
	int num = 0;
	int len = 0;

	num = va_arg(argument, int);
	len = _puts(convert(num, 8));
	return (len);
}

/**
 * HEXADECIMAL_arg - prints an int in hexadecimal format (UPPERCASE)
 * @argument: an argument
 * Return: return len of int in binary format
 */

int HEXADECIMAL_arg(va_list argument)
{
	long int num = 0;
	int len = 0;

	num = va_arg(argument, long int);
	len = _puts(convert(num, 16));
	return (len);
}
