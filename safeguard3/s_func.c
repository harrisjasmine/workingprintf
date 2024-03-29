#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * s_func - function to print strings
 * @args: string passed into function
 */

int s_func(va_list args)
{
	int i;
        char *s;

	s = va_arg(args, char *);
        if (s == NULL)
        {
                return (0);
        }
	i = 0;
        while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
