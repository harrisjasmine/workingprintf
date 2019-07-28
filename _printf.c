#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints everything
 * @format: list of types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	va_list args;

	var_t pall[] = {
		{"c", c_func},
		{"i", i_func},
		{"f", f_func},
		{"s", s_func},
	};
	int i = 0;
	int j = 0;
	char *sep;

	sep = "";

	va_start(args, format);

	while (format != '\0' && format[j] != 0)
	{
		i = 0;
		while (i < 4)
		{
			if (*pall[i].type == format[j])
			{
				printf("%s", sep);
				(pall[i].f)(args);
				sep = ", ";
			}

			i++;
		}

		j++;
	}

	printf("\n");

	va_end(args);
}
