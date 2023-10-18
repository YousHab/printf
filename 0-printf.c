#include "main.h"
/**
 * _printf - function that prints a format string.
 * @format: the format string.
 * Return: the number of arguments.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	int *(f)(va_list args);

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			count += _putchar(*format);
			format++;
		}
		else
		{
			format++;
			f = get_function(*format, args);
			if (f != NULL)
			{
				count += f(args);
			}
			else
				return (-1);
		}
	}

	va_end(args);
	return (count);
}
