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
	char *ptr;
	char alpha1[13] = "abcdefghijklm";
	char alpha2[13] = "nopqrstuvwxyz";


	ptr = malloc(strlen(str) * sizeof(char));
	strcpy(ptr, str);

	while (ptr[i])
	{
		for (j = 0; j <= 12; j++)
		{
			if (ptr[i] >= 'A' && ptr[i] <= 'Z')
			{
				if (ptr[i] == (alpha1[j] - 32))
					ptr[i] = (alpha2[j] - 32);
				else if (ptr[i] == (alpha2[j] - 32))
					ptr[i] = (alpha1[j] - 32);
			}
			else if (ptr[i] >= 'a' && ptr[i] <= 'z')
			{
				if (ptr[i] == alpha1[j])
					ptr[i] = alpha2[j];
				else if (ptr[i] == alpha2[j])
					ptr[i] = alpha1[j];
			}
		}
		i++;
	}
	_puts(ptr);
	free(ptr);
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
