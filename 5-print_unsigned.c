#include "main.h"

/**
 *
 */

int print_unsigned(unsigned int n)
{
	int count = 0;

	if (n > 9)
	{
		count += print_unsigned(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
