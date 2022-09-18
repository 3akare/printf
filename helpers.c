#include "main.h"

/**
 * print_number - prints an integer
 * @n: an integer
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num -= num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	putchar((num % 10) + '0');
}

/**
 * _puts - prints out a string
 * @s: a string
 * Return: the lenght of the string
 */

int _puts(char *s)
{
	int len = 0;

	while (*s)
	{
		putchar(*s++);
		len++;
	}
	return (len);
}
/**
 * die - prints an error message and kills the program
 * @s: the error message
 */

void die(char *s)
{
	dprintf(STDERR_FILENO, "%s", s);
	exit(0);
}
