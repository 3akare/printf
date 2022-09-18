#include "printf.h"

int print_integer(va_list argument)
{
    int number = va_arg(argument, int);
    int success = 1;
    print_number(number);
    return (2);
}


int print_string(va_list argument)
{
    char *str;
    int len;

    str = strdup(va_arg(argument, char *));
    len = _puts(str);
    return (len);    
}


int print_character(va_list argument)
{
    char letter = va_arg(argument, int);
    int success = 1;
    putchar(letter);
    return (1);
}