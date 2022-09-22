#include "main.h"
/**
 * rot13 - prints out a string int rots13 format
 * @str: a string
 *
 * Return: the number fo characters
 */

int rot13(char *str)
{
	int i = 0, j = 0;
	char alpha1[13] = "abcdefghijklm";
	char alpha2[13] = "nopqrstuvwxyz";

	while (str[i])
	{
		for (j = 0; j <= 12; j++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] == (alpha1[j] - 32))
					str[i] = (alpha2[j] - 32);
				else if (str[i] == (alpha2[j] - 32))
					str[i] = (alpha1[j] - 32);
			}
			else if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] == alpha1[j])
					str[i] = alpha2[j];
				else if (str[i] == alpha2[j])
					str[i] = alpha1[j];
			}
		}
		i++;
	}
	_puts(str);
	return (i);
}
/**
 * rot13_arg - prints a sting in rot13 format
 * @argument: an argument
 *
 * Return: returns the lenght of a string
 */

int rot13_arg(va_list argument)
{
	char *str;
	int len = 0;

	str = strdup(va_arg(argument, char *));
	len = rot13(str);
	free(str);
	return (len);
}
