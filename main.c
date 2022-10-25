#include "main.h"
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	char *str = "world";
	_printf("hello %p\n", str);
	printf("hello %p\n", str);
	return (0);
}