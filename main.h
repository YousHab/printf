#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define BUFF -1
/**
 * struct specifier - Structure that contains a specifier and
 * a pointer to the related function
 * @s: the specifier.
 * @f: a function pointer.
 *
 */

typedef struct specifier
{
	char s;
	int (*f)(va_list);
} sp_t;


int _puts(char *s);
int _putchar(int c);
int _printf(const char *format, ...);
int (*get_function(char s))(va_list);
int print_char(va_list args);
int print_str(va_list args);


#endif
