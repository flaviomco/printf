#include "holberton.h"

/**
 * print_i - prints an integer in decimal
 *
 * @args: arguments given to the function
 * Return: Ammount of characters written
 */

int print_i(va_list args)
{
	int n = va_arg(args, int);
	int size = 0;
	char min = '-';
	char c;

	if (n == 0)
	{
		c = n + '0';
		write(1, &c, 1);
		size++;
	}

	if (n < 0)
	{
		write(1, &min, 1);
		size++;
	}
	size += print_i2(n);
	return (size);
}

/**
 * print_i2 - prints a number
 *
 * @n: number to print
 * Return: Size in characters of the number
 */

int print_i2(const int n)
{
	char c;
	int size = 0, a;

	if (n != 0)
	{
		a = n % 10;
		size = print_i2(n / 10);
		if (a < 0)
		{
			a = a * -1;
		}
		c = a + '0';
		write(1, &c, 1);
		size++;
	}
	return (size);
}

/**
 * print_d - prints a decimal
 *
 * @args: argument given to the function
 * Return: Ammount of characters writed
 */

int print_d(va_list args)
{
	int n = va_arg(args, int);
	int size = 0;
	char min = '-';
	char c;

	if (n == 0)
	{
		c = n + '0';
		write(1, &c, 1);
		size++;
	}
	if (n < 0)
	{
		write(1, &min, 1);
		size++;
	}
	size += print_i2(n);
	return (size);
}
