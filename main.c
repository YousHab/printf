#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main(void)
{
	int len, len2;

	len = _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	len2 = printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_putchar(48);
	putchar(48);
	printf("%c", 48);
	_printf("%c", 48);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
