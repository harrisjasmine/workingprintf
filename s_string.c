#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

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
