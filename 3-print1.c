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
	_putchar(c);
	count++;
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
 * print_va_list - function that prints an integer.
 * @n: the number to be printed.
 * Return: the count.
 */
int print_va_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
		count++;
	}

	if (n != 0)
	{
		count += print_va_int(n / 10);
	}
	_putchar(n % 10 + '0');
	count++;
	return (count);
}

/**
 * print_int - function that print a integer from the va_list
 * @args: argument to be printed
 * Return: number of caracters.
 *
 */

int print_int(va_list args)
{
	int count = 0;
	int n;

	n = va_arg(args, int);
	count = print_va_int(n);
	return(count);
}


