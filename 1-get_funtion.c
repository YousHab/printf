#include "main.h"
/**
 */

int *(*get_function(char c, va_list args))(va_list)
{
	int i = 0;
	sp_t specifiers[]= {{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_int},
		{'i', print_int},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_HEX},
		{'S', print_S},
		{'p', print_add},
		{'r', print_rev},
		{'R', print_rot},
		{'\0', NULL}};

	while (specifiers[i].s != '\0')
	{
		if (c == specifiers[i].s)
			return (specifier[i].f);
		i++;
	}
	return (NULL);
}
