#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct print_type - characters and coresponding function pointers
 * @format: format character
 * @choose_print: chooses function to print with
 * Description - matches formating characters with function that use appropiate
 * data types to print.
 */

typedef struct print_type
{
	char format;
	int (*choose_print)(const char *, va_list);
} print_t;

int _printf(const char *format, ...);
int (*type_func(char test))(const char *c, va_list valist);
int print_num(int num);
int _putchar(char c);
int print_int(const char *c, va_list valist);
int print_char(const char *c, va_list valist);
int print_percent(const char *c, va_list valist __attribute__((unused)));

#endif
