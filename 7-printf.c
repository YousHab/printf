#include "main.h"
/**
 *
 */

int print_S(va_list args)
{
	const char *s;
	int count = 0;
	
	s = va_arg(args, char *);
	_putchar('\\');
	_putchar('x');
	count = 2;
	while(*s)
	{
		if (*s < 23 || *s >= 127)
		_putchar((*str >> 4) < 10 ? ('0' + (*str >> 4)) : ('A' + (*str >> 4) - 10));
		_putchar((*str & 0x0F) < 10 ? ('0' + (*str & 0x0F)) : ('A' + (*str & 0x0F) - 10));
		count += 2;
	}
	else
	{
		_putchar(*s);
		count++;
	}
	return (count);
}
