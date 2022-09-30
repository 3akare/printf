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

/**
 * string_custom_arg - prints the string.
 *	Non printable characters (0 < ASCII value < 32 or >= 127) are printed
 *	this way: \x, followed by the ASCII code value in hexadecimal
 *	(upper case - always 2 characters)
 *
 * @argument: an argument
 * Return: returns the len of a string
 */

int string_custom_arg(va_list argument)
{
	char *str;
	char str2[30];
	int len = 0, i = 0;

	str = strdup(va_arg(argument, char *));
	strcpy(str2, str);
	while (str2[i] != '\0')
	{
		if ((0 < str2[i] && 32 > str2[i]) || (str2[i] >= 127))
		{
			putchar('\\');
			putchar('x');
			len += 2;
			if (str2[i] >= 0 && str2[i] <= 15)
			{
				putchar('0');
				len += 1;
			}
			len += _puts(convert(str2[i], 16));
			i++;
			continue;
		}

		putchar(str2[i]);
		len += 1;
		i++;
	}
	free(str);
	return (len);
}
