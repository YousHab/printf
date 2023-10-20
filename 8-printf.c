#include "main.h"

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
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
