#include "main.h"
/**
 * print_bin - print the binary representation of an integer
 * @arg: the argument to be printed.
 * Return: number of printed characters.
 *
 */

int print_bin(va_list args)
{
	unsigned int n;
	int count = 0;

	n = va_arg(args, unsigned int);
	count = print_va_bin(n);
	return (count);
}

/**
 * print_va_bin - print the binary representation of a number.
 * @n; the number to be printed in binary form.
 * Return: number of characters.
 */

int print_va_bin(unsigned int n)
{
	int count = 0;

	if (n != 0)
	{
		print_va_bin(n / 2);
	}
	_putchar((n % 2) + '0');
	count++;
	return (count);
}

