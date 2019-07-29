#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function that produces output according to a format
 * @format: type of argument passed to function
 */

int _printf(const char *format, ...)
{
	va_list args;

	var_t type[] = {
		{"c", c_func},
		{"s", s_func},
		{"%", perc_func},
		{NULL, NULL},
	};
	int i, j, k, count;

	va_start(args, format);
	i = 0, count = 0, k = 0;
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			k++;
		}
		else
		{
			j = 0;
			while (type[j].vartype)
			{
				if (format[i + 1] == *type[j].vartype)
				{
					count += (type[j].f)(args);
					printf("%i", count);
				}
				j++;
			}
			i++;
		}
		i++;
	}
	k = k - 1;
	k += count;
	va_end(args);
	printf("%i\n", k);
	return (k);
}
