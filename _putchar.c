#include "main.h"

/**
 * _putchar - a function that prints out a character
 * @c: the character to be printed out
 *
 * Return: 1
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
