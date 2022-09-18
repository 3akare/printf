#include "printf.h"

int _printf(const char *format, ...)
{
    spec_t f_specifier;
    va_list args;
    va_start(args, format);
    int char_len = 0;

    if (!format)
    {
        dprintf(STDERR_FILENO, "non-null required\n");
        exit(1);
    }
    while (*format)
    {
        if (*format == '%')
        {
            *format++;
            if (*format == '%')
            {
                putchar('%');
                char_len++;
                *format++;
                continue;
            }
            else if (f_specifier.opcode = get_func(*format))
            {
                char_len += f_specifier.opcode(args);
                // char_len++;
                *format++;
                continue;
            }
        }
        putchar(*format++);
        char_len++;
    }
    va_end(args);
    return (char_len);
}