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

	while(*s != '\0')
	{
		count += _putchar(*s);
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

int _putchar(char c)
{
	char buffer[BUFFER_SIZE];
	static int i = 0;
	
	if (i == BUFFER_SIZE - 1)
	{
		write(1, buffer, i + 1);
		i = 0;
	}
	else
	{
		buffer[i] = c;
		i++;
	}
	return(1);
}
