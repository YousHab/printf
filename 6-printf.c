#include "main.h"
/**
 * print_va_hex - print hex.
 * @n: integer to be printed.
 * Return: the count.
 */
int print_va_hex(unsigned int n)
{
	int count = 0;
	unsigned int digit = 0;

	if (n / 16 != 0)
	{
		count = print_va_hex(n / 16);
	}
	digit = n % 16;
	if (digit < 10)
	{
		_putchar(digit + '0');
		count++;
	}
	else
	{
		_putchar('a' + (digit - 10));
		count++;
	}
	return (count);
}

/**
 * print_hex - print hex.
 * @args: integer to be printed.
 * Return: the count.
 */
int print_hex(va_list args)
{
	int count = 0;
	unsigned int n = 0;

	n = va_arg(args, unsigned int);
	count = print_va_hex(n);
	return (count);
}

/**
 * print_va_HEX - print hex.
 * @n: integer to be printed.
 * Return: the count.
 */
int print_va_HEX(unsigned int n)
{
	int count = 0;
	unsigned int digit = 0;

	if (n / 16 != 0)
	{
		count = print_va_hex(n / 16);
	}
	digit = n % 16;
	if (digit < 10)
	{
		_putchar(digit + '0');
		count++;
	}
	else
	{
		_putchar('a' + (digit - 10));
		count++;
	}
	return (count);
}

/**
 * print_HEX - print hex.
 * @args: integer to be printed.
 * Return: the count.
 */
int print_HEX(va_list args)
{
	int count = 0;
	unsigned int n = 0;

	n = va_arg(args, unsigned int);
	count = print_va_HEX(n);
	return (count);
}

