#include "main.h"

/**
 * parser - selects the right function dependent on the
 * the charcter that follows '%'
 * @argument1: the first argument
 * @argument2: the second argument
 *
 * Return: 0.
 */

int (*parser(const char *argument1, int argument2))(va_list)
{
	string_format list[] = {
		{"c", _print_character},
		{NULL, NULL},
	};

	int i;

	for (i = 0; list[i].character != NULL; i++)
	{
		if (list[i].character[0] == argument1[argument2])
		{
			return (list[i].function);
		}
	}
	return (NULL);
}
