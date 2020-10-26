#include "holberton.h"
/**
 * _printf - Prints output to a format
 * @format: String to be printed
 * Return: number of printed chars
 */
int _printf(const char *format, ...)
{
	format_func ar_fm[] = {
		{"c", p_char}, {"s", p_str}, {"d", p_int},
		{"i", p_int}, {"%", p_percent}, {'\0', '\0'}
	};
	va_list p_l;
	int i, j, n = 0, sc = 0;
	int m = 0;

	if (format == '\0')
		return (-1);
	va_start(p_l, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			j = 0;
			while (ar_fm[j].ft != '\0')
			{
				if (ar_fm[j].ft[0] == format[i + 1])
				{
					n = ar_fm[j].func(p_l);
					m = m + n;
					i++;
					sc++;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(p_l);
	return ((i + m) - (2 * sc));
}
