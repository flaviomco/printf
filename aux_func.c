#include "holberton.h"

/**
 * _printf2 - selects the function to format the text
 *
 * @format: text to be formated
 * @args: list of arguments
 * @spec: list of functions to format text
 * Return: size of printed text
 */

int _printf2(const char *format, va_list args, printer *spec)
{
	int a = 0, b, size = 0, test = 0;

	while (format && format[a])
	{
		if (format[a] == '%')
		{
			b = 0;
			while (spec[b].c != NULL)
			{
				if (format[a + 1] == '%')
				{
					write(1, &format[a], 1);
					size++;
					a++;
					test = 1;
					break;
				}
				else if (spec[b].c[0] == format[a + 1])
				{
					size += spec[b].f(args);
					a++;
					test = 1;
					break;
				}
				b++;
			}
			if (test == 0)
			{
				write(1, &format[a], 1);
				size++;
			}
		}
		else
		{
			write(1, &format[a], 1);
			size++;
		}
		a++;
	}
	return (size);
}
