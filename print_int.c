#include "main.h"
/**
 * print_int - prints a integen.
 *
 * @args: argument to print.
 *
 * Return: the number of printed characters
 */

int print_int(va_list args)
{
	int n;
	int count = 0;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	if (n / 10)
	{
		count += print_int(n / 10);
	}

	_putchar((n % 10) + '0');
	count++;

	return (count);
}
