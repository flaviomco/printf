#include "holberton.h"

/**
 * print_c - prints a single char
 * @args: arguments received from _printf
 * Return: numbers of chars
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}


/**
 * print_s - prints a string
 * @args: arguments received from _printf
 * Return: number of chars
 */
int print_s(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
	}
	return (i);
}
