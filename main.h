#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define BUFF -1

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
/*int print_int(int n);
int print_binary(int n);
int print_unsigned(va_list args);
int print_octal(va_list args);
int *convert_to_oct(int n);
char *conver_to_hex(int n);
int print_add(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_S(va_list args);
int print_address(va_list args);
int print_rev(va_list args);
int print_rot(va_list args);*/


#endif
