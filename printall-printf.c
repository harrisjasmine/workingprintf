#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * c_func - function that prints characters
 * @args: character passed into function
 */
void c_func(va_list args)
{
	printf("%c", (char) va_arg(args, int));
}

/**
 * i_func - function that prints integers
 * @args: integer passed into function
 */
void i_func(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * f_func - function for a float
 * @args: float passed into the function
 */
void f_func(va_list args)
{
	printf("%f", (float) va_arg(args, double));
}

/**
 * s_func - function to print strings
 * @args: string passed into function
 */
void s_func(va_list args)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", s);
}

/**
 * print_all - function that prints everything
 * @format: list of types of arguments passed to function
 */

void print_all(const char * const format, ...)
{
	va_list args;

	p_t pall[] = {
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
