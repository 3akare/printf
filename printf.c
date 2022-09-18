#include "main.h"

/**
 * _printf - a formatted output conversion C program.
 * desc: It is a puesdo-recreation of the C standard library function
 * 'printf'
 * @format:a string to be formatted
 * Return: the lenght of the formatted string
 */

int _printf(const char *format, ...)
{
	int char_len = 0;
	spec_t f_specifier;
	va_list args;

	va_start(args, format);
	if (!format)
		die("non-null required\n");
	while (*format)
	{
		if (*format == '%')
		{
			f_specifier.c = *format++;
			if (*format == '%')
			{
				putchar('%');
				char_len++;
				f_specifier.c = *format++;
				continue;
			}
			else
			{
				f_specifier.opcode = get_func(*format);
				if (!f_specifier.opcode)
					die("_printf failed\n");
				char_len += f_specifier.opcode(args);
				f_specifier.c =*format++;
				continue;
			}
		}
		putchar(*format++);
		char_len++;
	}
	va_end(args);
	return (char_len);
}
