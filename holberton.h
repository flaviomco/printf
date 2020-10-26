#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <limits.h>

/**
 * struct print - Struct with format with its respective function
 *
 * @print: The format
 * @p: The function associated
 */
typedef struct print
{
	char *print;
	int (*p)();
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list arg);
int p_str(va_list arg);
int p_int(va_list arg);
int p_percent(va_list arg);

#endif
