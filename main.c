#include "printf.h"

int add(int b, ...)
{
    spec_t hey;
    hey.opcode = get_func('d');

    va_list list_of_args;
    va_start(list_of_args, b);
    for (int n = 0; n < b; n++)
    {
        hey.opcode(list_of_args);
    }
}

int main(void)
{
    int j = 90;
    // char j = 'j';
    char fish[] = "Ade";

    int n = printf("%s %s %d %d %c\n",fish, "ade", j, j, j);
    printf("%d\n", n);
    n = _printf("%s %s %d %d %c\n", fish, "ade", j, j, j);
    _printf("%d\n", n);
}