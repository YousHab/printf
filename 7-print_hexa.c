#include "main.h"
/**
 * print_hexa - prints the hexadecimal representation of a given int.
 *
 * @n: the integer to be converted and printed.
 *
 * Return: the number of characters.
 *
 */

int print_hexa(unsigned int n)
{
	int a = 0;
	int count = 0;

	if (n > 15)
	{
		count += print_hexa(n / 16);
	}

	a = n % 16;

	if (a < 10)
	{
		_putchar(n + '0');
	}

	else
	{
		_putchar(a - 10 + 'a');
	}

	count++;
	return (count);
}
