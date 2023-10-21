#include "main.h"
/**
 * print_S - function that prints non printable
 *
 * @args: the argument.
 * Return: the count.
 *
 */

int print_S(va_list args)
{
	char *s;
	int count = 0;
	int c;
	
	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	while(*s)
	{
		if (*s < 32 || *s >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			c = *s;
			if (c < 16)
			{
				_putchar('0');
				count++;
			}
			count += print_va_HEX(c);
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
