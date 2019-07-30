#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * c_func - function that prints characters
 * @args: character passed into function
 *
 * Return: 1 for number of char
 */

int c_func(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
