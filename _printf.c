#include "holberton.h"

/**
 * _printf - prints input
 * @format: character string
 * Return: number of chars printed
 */

int _printf(const char *format, ...)
{
	unsigned int j;
	int number = 0;
	va_list valist;
	int (*print)(const char *, va_list);

	if (format == NULL)
		return (-1);
	va_start(valist, format);

	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			j++;
			print = type_func(format[j]);
			if (print == NULL)
			{
				_putchar('%');
				_putchar(format[j]);
				number += 2;
			}
			else
				number += print(format + j, valist);
		}
		else
			number += _putchar(format[j]);
	}
	va_end(valist);
	return (number);
}
