#include "holberton.h"

/**
 * print_c - prints a character
 * @args: arguments for _printf
 * Return: number of char printed
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_s - loops through a string and prints every character
 * @args: arguments for _printf
 * Return: number of char printed
 */
int print_s(va_list args)
{
	int i;
	char *c = va_arg(args, char *);

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
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
