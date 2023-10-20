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
	if (i < BUFFER_SIZE - 1)
	{
		buffer[BUFFER_size] = c;
		i++;
	}
	else
	{
		buffer[BUFFER_SIZE] = '\0';
		write(1, &buffer, BUFFER_SIZE);
		i = 0;
	}
	return (1);
}
