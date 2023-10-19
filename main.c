#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("%i - %i = %i\n", 1024, 2048, -1024);
	len2 = printf("%i - %i = %i\n", 1024, 2048, -1024);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
