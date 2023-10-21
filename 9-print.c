#include "main.h"
/**
 * print_address - print an adress.
 *
 * @args: the arguments.
 *
 * Return: the count.
 */

int print_address(va_list args)
{
	int count = 0;
	unsigned int n;
	char *s = "(nil)";
	void *ptr;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		count = _puts(s);
		return (count);
	}
	n = (unsigned int long)ptr;
	_putchar('0');
	_putchar('x');
	count++;
	count += print_va_hex(n);
	return (count);
}
