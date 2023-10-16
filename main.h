#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_int(int n);
int print_binary(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(int n);
int print_hexa(unsigned int n);
int print_HEXA(unsigned int n);

#endif
