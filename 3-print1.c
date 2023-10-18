#include "main.h"
/**
 * print_char - a function that prints a character
 *
 * @args: argument to be printed.
 *
 * Return: The number of printed characters.
 *
 */

int print_char(va_list args)
{
	char c;
	int count = 0;

	c = va_arg(args, int);
	count += _putchar(c);
	return (count);
}

/**
 * print_str - a function that prints a stringr
 * @args: argument to be printed.
 * Return: The number of printed characters.
 */

int print_str(va_list args)
{
	char *s;
	int count = 0;

	s = va_arg(args, char *);
	count += _puts(s);
	return (count);
}
/**
 * print_int - print an integer.
 * @args: arguments to be printed
 * Return: number of printed characters.
 */

int print_int(va_list args)
{
	int n;
	int count = 0;

	n = va_arg(args, int);
	if (n < 0)
	{
		n = -n;
		count += _putchar('-');
	}
	if (n != 0)
	{
		count += print_int(n / 10);

	}
	_putchar((n % 10) + '0');
	count++;
	return (count);
}
/**
 * print_binary - print a binary represantation of a integer.
 * @args: the argument to be evaluated.
 * Return: number of printed characters
 *
 */

int print_binary(va_list args)
{
	unsigned int n;
	int count = 0;

	n = va_arg(args, unsigned int);

	if (n != 0)
	{
		count += print_binary(n / 2);
	}
	_putchar((n % 2) + '0');
	count++;
	return (count);
}
