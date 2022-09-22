#include "main.h"
#include <limits.h>

int main(void)
{
    int len = 0;

    len = _printf("Complete the sentence: You %r nothing, Jon snow.\n", "nhoj");
    _printf("%d\n", len);
    return (0);
}
