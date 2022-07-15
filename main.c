#include "main.h"

int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	int len = _printf("String:[%s]\n", "I am a string !");
	int len2 = printf("String:[%s]\n", "I am a string !");

	printf("[%d][%d]", len, len2);
	_printf("[%d][%d]", len, len2);
}
