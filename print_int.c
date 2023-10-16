#include "main.h"
/**
 * print_int - prints a integen.
 *
 * @n: argument to print.
 *
 * Return: the number of printed characters
 */

int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n > 9)
	{
		count += print_int(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
