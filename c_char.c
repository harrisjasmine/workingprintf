#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * c_func - function that prints characters
 * @args: character passed into function
 */

void c_func(va_list args)
{
        char *c = va_arg(args, int);
		while (*c++)
		{
			_putchar(c);
		}
}
