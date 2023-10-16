#include "main.h"
/**
 * _printf - a function that prints a given format string.
 *
 * @format: the format string to be printed.
 *
 * Return: NUlber of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int m;
	unsigned int n;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				count += print_char(args);
			}
			else if (*format == 's')
			{
				count += print_string(args);
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'i' || *format == 'd')
			{
				m = va_arg(args, int);
				count += print_int(n);
			}
			else if (*format == 'b')
			{
				n = va_arg(args, unsigned int);
				count += print_binary(n);
			}
			else if (*format == 'u')
			{
				n = va_arg(args, unsigned int);
				count += print_unsigned(n);
			}
			else if (*format == 'o')
			{
				m = va_arg(args, int);
				count += print_octal(m);
			}
			else if (*format == 'x')
			{
				n = va_arg(args, unsigned int);
				count += print_hexa(n);
			}
			else if (*format == 'X')
			{
				n = va_arg(args, unsigned int);
				count += print_HEXA(n);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
