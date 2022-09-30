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

char *convert(long int num, int base);
int print_integer(va_list argument);
int print_string(va_list argument);
int print_character(va_list argument);
int print_binary_arg(va_list argument);
int rot13_arg(va_list argument);
int reverse_string_arg(va_list argument);
int octal_arg(va_list argument);
int unsigned_arg(va_list argument);
int HEXADECIMAL_arg(va_list argument);
int hexadecimal_arg(va_list argument);
int string_custom_arg(va_list argument);
int print_address_arg(va_list argument);

/** helper functions **/
int print_number(int n);
int _puts(char *s);
int search(char c);
int print_binary(int n);
int neg_print_binary(int n, int len);
int pos_print_binary(int n);
int rot13(char *str);
int reverse_string(char *str);

#endif
