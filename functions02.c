#include "holberton.h"

/**
 * type_func - checks the format character and returns function pointers
 * @test: format char to test
 * Return: pointer to print the correct type
 */

int (*type_func(char test))(const char *c, va_list)
{
	int i;
	print_t operators[] = {
		{'c', print_int}, {'d', print_int},
		{'i', print_int}, {'s', print_char},
		{'r', print_char},
		{'%', print_percent}, {0, NULL}
	};

	for (i = 0; operators[i].format != 0; i++)
	{
		if (test == operators[i].format)
			return (operators[i].choose_print);
	}
	return (NULL);
}

/**
 * print_int - prints characters according to format into c
 * @c: format info passed to function
 * @valist: valist passed form print to get argument
 * Return: number of chars printed
 */

int print_int(const char *c, va_list valist)
{
	int arg = va_arg(valist, int);

	switch (*c)
	{
	case 'c':
		return (_putchar(arg));
	case 'd':
		return (print_num(arg));
	case 'i':
		return (print_num(arg));
	}
	return (0);
}

/**
 * print_char - string case
 * @c: location in format
 * @valist: valist from printf to get argument
 * Return: count
 */

int print_char(const char *c, va_list valist)
{
	int i = 0;
	char *arg = va_arg(valist, char*);

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
	int len = 0;

	while (arg[i] != '\0')
	{
		i++;
	}
	for (i--; i >= 0; i--)
		len += _putchar(arg[i]);
	return (len);
}
	}
	return (0);
}

/**
 * print_percent - prints the % character
 * @c: character to print
 * @valist: unused valist
 * Return: number of char printed
 */

int print_percent(const char *c, va_list valist __attribute__((unused)))
{
	if (*c == '%')
		return (_putchar('%'));
	return (0);
}
