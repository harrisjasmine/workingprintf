#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * d_func - function to print doubles
 * @args: string passed into function
 *
 * Return: number of chars printed
 */

int d_func(va_list args)
{
	int i, n;
	char str;

	n = va_arg(args, int);
	str = print_number(n);
	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_number - converts an integer into a string
 * @n: integer passed from d_func
 *
 * Return: string
 */

char print_number(int n)
{
	unsigned int m;

	if (n >= 0)
	{
		m = n;
		if (n > 9)
		{
			print_number(m / 10);
		}
	}
	else
	{
		m = n * (-1);
		putchar('-');
		if (n < -9)
		{
			print_number(m / 10);
		}
	}
	return (putchar('0' + (m % 10)));
}
