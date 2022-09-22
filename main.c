#include "main.h"
#include <limits.h>

int main(void)
{
    int len = 0;

    len = _printf("Complete the sentence: You %R nothing, Jon snow.\n", "xabj");
    _printf("%d\n", len);
    return (0);
}
