#include "printf.h"

opcode get_func(char c)
{
    spec_t specifiers[] = {
        {'d', print_integer},
        {'c', print_character},
        {'s', print_string},
        {0, NULL}
    };
    
    for (int i = 0; i < 3; i++)
    {
        if (specifiers[i].c == c)
        {
            return(specifiers[i].opcode);
        }
    }
    dprintf(STDERR_FILENO, "Failed get func\n");
    exit(0);
}