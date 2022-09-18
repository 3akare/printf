#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

typedef int (*opcode)(va_list args);

/**
 * struct specifier_s - a structure conatining a character
 * and a function pointer
 * @c: a character
 * @opcode: a function pointer
 */

typedef struct specifier_s
{
	char c;
	int (*opcode)(va_list args);
} spec_t;

/** _printf **/

int _printf(const char *format, ...);

/** function getter **/
opcode get_func(char c);

int print_integer(va_list argument);
int print_string(va_list argument);
int print_character(va_list argument);
int print_binary_2(va_list argument);

/** helper functions **/
int print_number(int n);
int _puts(char *s);
int search(char c);
int print_binary(int n);

#endif
