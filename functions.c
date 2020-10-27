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
	int cifras, i, j, digitos, potencia;
	int n = va_arg(args, int);
	unsigned int m, un;

	if (n < 0)
	{
		un = (-1) * n;
		_putchar('-');
	}
	else
	{
		un = n;
	}
	m = un;
	cifras = 0;
	while (m / 10 != 0)
	{
		cifras++;
		m = m / 10;
	}
	for (i = 0; i < cifras; i++)
	{
		potencia = 1;

		for (j = i; j < cifras; j++)
		{
			potencia = potencia * 10;
		}

		digitos = un / potencia;
		un = un - (digitos * potencia);
		_putchar(digitos + 48);
	}
	_putchar(un + 48);
	return (cifras + 1);
}
