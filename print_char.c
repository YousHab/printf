#include "main.h"
/**
 * print_char - function that prints one character.
 * @args: the argument to be printed.
 * Return: 1
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

