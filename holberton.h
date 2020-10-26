#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <limits.h>

/**
 * struct format_func - Struct with format with its respective function
 *
 * @ft: The format
 * @func: The function associated
 */
typedef struct format_func
{
	char *ft;
	int (*func)();
} format_func;

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list);
int p_str(va_list);
int p_int(va_list);
int p_percent(va_list);

#endif
