#ifndef _PRINT_H_
#define _PRINT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

typedef int (*opcode)(va_list args);

typedef struct specifier_s
{
    char c;
    int (*opcode)(va_list args);
} spec_t;

/** _printf **/
int _printf(const char *format, ...);

/** function fetcher **/
opcode get_func(char c);


int print_integer(va_list argument);
int print_string(va_list argument);
int print_character(va_list argument);

/** helper function **/

void print_number(int n);
int _puts(char *s);
int _printf(const char *format, ...);

#endif