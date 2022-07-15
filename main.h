#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct string_format - the structure of the string format
 * @argument: a char pointer to arguments
 * @function: pointer to function
 */

typedef struct string_format
{
	char *argument;
	int (*function)(va_list);
} string_format;

int _putchar(char c);
int _printf(const char *format, ...);
int (*parser(const char *argument1, int argument2))(va_list);
int print_character(va_list list);
int print_string(va_list list);
int print_number(va_list list);

#endif
