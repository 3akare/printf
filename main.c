#include "main.h"
#include <limits.h>

int main(void)
{
	int len, len2;

	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}