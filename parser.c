#include "main.h"

/**
 * *parser - selects the right function to
 * format a string
 * @argument1: the first argument
 * @argument2: the second argument
 *
 * Return: 0.
 */

int (*parser(const char *argument1, int argument2))(va_list)
{
	string_format list[] = {
		{"c", print_character},
		{NULL, NULL},
	};
	int i;

	for (i = 0; list[i].argument != NULL; i++)
	{
		if (list[i].argument[0] == argument1[argument2])
		{
			return (list[i].function);
		}
	}
	return (NULL);
}
