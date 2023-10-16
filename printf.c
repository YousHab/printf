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
	int n;

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
				n = va_arg(args, int);
				count += print_int(n);
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


int main(void)

{
	_printf("my name is %s : \n", "ali");
	_printf("I'am %i\n", 27);
	_printf("percent %%\n");
	_printf("char %c", 'a');

	return (0);
}



























	
