#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * format_print - function find the correct printer and prints it
 * @type: types for format printers
 * @format: format string
 * @fmt_idx: current index in format string
 * @args: list of args for formatting
 *
 * Return: k, number of characters printed
 */
int format_print(var_t type[], const char *format, int fmt_idx, va_list args)
{
	int j = 0;

	while (type[j].vartype)
	{
		if (format[fmt_idx + 1] == *type[j].vartype)
		{
			return ((type[j].f)(args));

			i++;
		}
		j++;
	}

	return (-1);
}


/**
 * _printf - function that produces output according to a format
 * @format: type of argument passed to function
 *
 * Return: k, number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, k, count, format_print_count;
	var_t type[] = {
		{"c", c_func}, {"s", s_func}, {"i", i_func}, {"%", perc_func},
		{"b", b_func}, {"d", d_func}, {NULL, NULL},
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
			format_print_count = format_print(type, format, i, args);

			if (format_print_count == -1)
			{
				count += 1;
				_putchar('%');
			}
			else
			{
				count += format_print_count;
			}
		}
		i++;
	}
	k = k - 1;
	k += count;
	va_end(args);
	return (k);
}
