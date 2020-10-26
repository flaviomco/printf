#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_func(int num);
int _putchar(char c);
/*int get_op(char *format, va_list valist);*/
int func_int(const char *c, int arg);
int func_str(const char *c, char *arg);

#endif
