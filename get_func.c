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
	int len = 0;

	spec_t specifiers[] = {
		{'d', print_integer},
		{'c', print_character},
		{'s', print_string},
		{'i', print_integer},
		{'b', print_binary_arg},
		{'R', rot13_arg},
		{0, NULL}
	};
	/** find a way to get the exact len int specifiers **/
	while (specifiers[len].opcode != NULL)
		len++;
	for (i = 0; i < len; i++)
	{
		if (specifiers[i].c == c)
		{
			return (specifiers[i].opcode);
		}
	}
	return (NULL);
}

