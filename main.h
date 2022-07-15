#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct string_format - string format
 * @character: character pointer argument
 * @function: function pointer
 */

typedef struct string_format
{
	char *character;
	int (*function)(va_list);
} string_format;

int _putchar(char c);
int _printf(const char *format, ...);
int (*parser(const char *argument1, int argument2))(va_list);

#endif
