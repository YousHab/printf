#include "main.h"
/**
 * print_non_printable - print non printable characters
 *
 * @args: argument to be printed,
 *
 * Return: the count.
 */
int print_non_printable(va_list args)
{
	const char *s;
	int count = 0;

	s = va_arg(args, const char *);
	while (*s)
	{
		if (*s < 32 || *s >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += print_HEXA(*s);
		}
		else
		{
			_putchar(*s);
			count++;
		}
		s++;
	}
	return (count);
}
