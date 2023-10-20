#include "main.h"
/**
 * print_octal - print octal
 * @args: the argument.
 * Return: the count.
 */
int print_octal(va_list args)
{
	int count = 0;
	unsigned int n;

	n = va_arg(args, unsigned int);
	count = print_va_octal(n);
	return (count);
}

/**
 * print_va_octal - print octal.
 * @n: the integer to evaluate.
 * Return: the count.
 */

int print_va_octal(unsigned int n)
{
	int count = 0;

	if (n / 8 != 0)
	{
		count += print_va_octal(n / 8);
	}
	_putchar(n % 8 + '0');
	count++;
	return (count);
}
