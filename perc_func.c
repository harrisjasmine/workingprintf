#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * perc_func - function that prints %
 * @args: character passed into function
 */

int perc_func(va_list args)
{
	char c;

	c = va_arg(args, int);
	(void) c;
	_putchar('%');
	return (1);
}
