#include "main.h"
/**
 * print_octal - a function that print an integer in octal
 * representation.
 *
 * @n: the integer to be printed.
 *
 * Return: number of characters
 */

int print_octal(int n)
{
	int count = 0;
	
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		count++;
	}
	else if (n > 7)
	{
		count += print_octal(n /8);
	}
	_putchar((n % 8) + '0');
	count++;

	return (count);
}
