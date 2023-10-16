#include "main.h"
/**
 * print_binary - function that prints an int number in his binary form.
 *
 * @n : the integer to be printed.
 *
 * Return: nimber of printed characters.
 */

int print_binary(unsigned int n)
{
	int count = 0;

	if (n > 1)
	{
		count += print_binary(n / 2);
	}

	_putchar((n % 2) + '0');
	count++;

	return (count);

}
