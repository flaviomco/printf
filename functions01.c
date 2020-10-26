#include "holberton.h"

/**
 *  print_func - prints a %d or %i
 * @num: number to print
 * Return: count of characters printed
 */

int print_func(int num)
{
	int count = 0;

	if (num == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		num += 2000000000;
		num *= -1;
		count += 2;
	}
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		count += 1;
	}
	if (num > 9)
	{
		count += print_func(num / 10);
	}
	count += _putchar((num % 10) + '0');
	return (count);
}
