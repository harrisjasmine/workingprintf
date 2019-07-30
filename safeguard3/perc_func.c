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
	int i, m, n, l, j;

	c = va_arg(args, int);
/*odd number of % overall*/
	if (format[2 * (i + 1)] == '%')
	{
		n = 2 * (i + 1);
		m = (n / 2) + 1;
		for (j = 0; j < m; j++)
			_putchar('%'), l++;
	}
/*even number of % overall*/
	else if (format[1] == '%' || format[2 * (i + 1) + 1)] == '%')
	{
		(void) c;
		_putchar('%'), l++;
	}
	return (l);
}
