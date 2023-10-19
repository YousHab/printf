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
