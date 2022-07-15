#include "main.h"
/**
 * _printf - prints out a formatted string
 * @format: the string to be formatted
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0,count = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i++;
			}
			else if (parser(format, i + 1) != NULL)
			{
				count += parser(format, i + 1)(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}