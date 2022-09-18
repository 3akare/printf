#include "printf.h"

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	putchar((num % 10) + '0');
}

int _puts(char *s)
{
    int len = 0;
    while(*s && *s != '\n')
    {
        putchar(*s);
        *s++;
        len++;
    }
    return(len);
}