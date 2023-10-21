#include "main.h"

/**
 * print_rev - function that prints a reversed string
 * @args: arguments
 *
 * Return: number of characters
 */
int print_rev(va_list args)
{
	char *s;
	int i;
	int count = 0;

	s = va_arg(args, char *);
	if (s == NULL)
		s = "(null)";
	while (s[count] != '\0')
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	return (count);
}

#include "main.h"
/**
 * print_rot13 - print in rot13.
 * @args: the argument
 * Return: the count
 */
int print_rot(va_list args)
{
	int i, j, k, count = 0;
	char *s;
	char abc[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	
	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; abc[j] != '\0' && !k; j++)
		{
			if (s[i] == abc[j])
			{
				_putchar(rot[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
