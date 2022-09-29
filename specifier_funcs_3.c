#include "main.h"

/**
 * hexadecimal_arg - prints an int in hexadecimal format (UPPERCASE)
 * @argument: an argument
 * Return: return len of int in binary format
 */

int hexadecimal_arg(va_list argument)
{
	int num = 0;
	int len = 0;
	char *str;

	num = va_arg(argument, int);
	str = (convert(num, 16));
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
			putchar(*str++);
		}
		len++;
	}
	return (len);
}
