#include "main.h"
/**
 * _puts - a function that displays a string.
 *
 * @s: a pointer to the string to be printed.
 *
 * Return: number of printed characters.
 */

int _puts(char *s)
{
	int count = 0;

	while (*s)
	{
		count += _putchar(*s);
	}
	return (count);
}

/**
 * _putchar - a fucntion that displays a character.
 *
 * @c: the character to be printed.
 *
 * Return: 1.
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
