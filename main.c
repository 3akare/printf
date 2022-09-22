#include "main.h"
#include <limits.h>

int main(void)
{
    int len = 0;

    len = _printf("%r", "\nThis sentence is retrieved from va_args!");
    len += _printf("%r", "\nThis sentence is retrieved from va_args!");
    _printf("%d\n", len);
    return (0);
}
