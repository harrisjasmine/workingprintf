#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - function that produces output according to a format
 * @format: type of argument passed to function
 *
 * Return: k, number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, j, k, count;
	var_t type[] = {
		{"c", c_func},
		{"s", s_func},
		{"%", perc_func},
		{"i", i_func},
		{"d", d_func},
		{NULL, NULL},
	};

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
				if (format[i + 1] == ' ')
				{
					_putchar('%');
					_putchar(' ');
					k++, k++;
				}
				else if (format[i + 1] == *type[j].vartype)
				{
					count += (type[j].f)(args);
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
	return (k);
}
