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

	while (*s != '\0')
	{
		_putchar(*s);
		count++;
		s++;
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
	static char buffer[BUFFER_SIZE];
	static int i = 0;

	if (c == BUFF || i >= BUFFER_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != BUFFER_SIZE)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}
