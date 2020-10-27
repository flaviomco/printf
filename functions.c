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



/**
 * print_i - print integers
 * @args: arguments for _printf
 * Return: number of arguments printed
 */
int print_i(va_list args)
{
	int i, j, cifras = 0, potencia, n, y = 0, bytes = 0;
	unsigned int a, b;

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		bytes++;
		return (bytes);
	}
	if (n < 0)
	{
		_putchar('-');
		a = n * -1;
		bytes++;
	}
	else
	{
		a = n;
	}
	b = a;
	while ((a / 10) != 0)
	{
		cifras++;
		a /= 10;
	}

	for (i = 0; i < cifras; i++)
	{
		potencia = 1;
		for (j = i; j < cifras; j++)
		{
			potencia = potencia * 10;
		}
		y = b / potencia;
		b = b - (y * potencia);
		_putchar(y + '0');
	}
	_putchar(b + '0');
	return (bytes + cifras + 1);
}
