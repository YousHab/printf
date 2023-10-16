#include "main.h"
/**
 * print_string - function that print a string
 *
 * @args: argument to be printed.
 *
 * Return: the number of the characters.
 */

int print_string(va_list args)
{
	char *s;
	int count = 0;

	s = va_args(args, char *);

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		count++;
	}

	return (count);
}
