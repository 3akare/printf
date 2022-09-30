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
	char hexadecimal[20];

	num = va_arg(argument, int);
	if (num < 0)
	{
		sprintf(hexadecimal, "%x", num);
		len += _printf("%s", hexadecimal);
	}
	else
	{
		str = (convert(num, 16));
		while (*str)
		{
			if (*str >= '0' && *str <= '9')
			{
				len++;
				putchar(*str++);
				continue;
			}
			else
				*str += 32;
			putchar(*str++);
			len++;
		}
	}
	return (len);
}

/**
 * unsigned_arg - prints unsigned integer
 * @argument: an argument
 * Return: return len of int in binary format
 */

int unsigned_arg(va_list argument)
{
	unsigned int number = va_arg(argument, unsigned int);
	int len = 0;
	char unsign[20];

	sprintf(unsign, "%u", number);
	len = _printf("%s", unsign);
	return (len);
}
