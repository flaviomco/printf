#include "holberton.h"

/**
 * func_int -  prints int
 * @c: format info passed into function
 * @arg: int to translate then print
 * Return: number of characters printed
 */

int func_int(const char *c, int arg)
{
	switch (*c)
	{
	case 'c':
		return (_putchar(arg));
	case 'd':
		return (print_func(arg));
	case 'i':
		return (print_func(arg));
	}
	return (0);
}


/**
 * func_str - string case
 *
 * @c: location in format
 * @arg: va_arg in printf.c
 *
 * Return: count
 */

int func_str(const char *c, char *arg)
{
	int i = 0;

	if (arg == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);
	}
	switch (*c)
	{
	case 's':
	{
		while (arg[i] != '\0')
		{
			_putchar(arg[i]);
			i++;
		}
		return (i);
	}
	case 'r':
	{
		while (arg[i] != '\0')
		{
			i++;
		}
		for (i--; i >= 0; i--)
			_putchar(arg[i]);
		return (i);
	}
	}
	return (0);
	}
