#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

typedef struct specifier
{
	char s;
	int (*f)(va_list);
} sp_t;


int _puts(char *s);
int _putchar(char c);
int _printf(const char *format, ...);
int *(*(get_function(char s, va_list args))(va_list));
int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
char *convert_to_bin(int n);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_octal(va_list args);
int *convert_to_oct(int n);
char *conver_to_hex(int n);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_S(va_list args);
int print_address(va_list args);
int print_rev(va_list args);
int print_rev(va_list args);


#endif
