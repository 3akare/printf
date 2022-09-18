#include "main.h"

/**
 * get_func - returns the right function depending on the
 * specifier
 * @c: a character
 *
 * Return: returns opcode (the required function)
 */

opcode get_func(char c)
{
	int i = 0;
	spec_t specifiers[] = {
		{'d', print_integer},
		{'c', print_character},
		{'s', print_string},
		{'i', print_integer},
		{0, NULL}
	};
	/** find a way to get the exact len int specifiers **/
	for (i = 0; i < 4; i++)
	{
		if (specifiers[i].c == c)
		{
			return (specifiers[i].opcode);
		}
	}
	dprintf(STDERR_FILENO, "get func failed\n");
	exit(0);
}

