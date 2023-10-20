#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

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
int print_int(va_list args);
int print_va_int(int n);
int print_bin(va_list args);
int print_va_bin(unsigned int n);
int print_va_unsigned(unsigned int n);
int print_unsigned(va_list args);
int print_va_octal(unsigned int n);
int print_octal(va_list args);
int print_va_hex(unsigned int n);
int print_hex(va_list args);
int print_va_HEX(unsigned int n);
int print_HEX(va_list args);
int print_S(va_list args);

#endif
