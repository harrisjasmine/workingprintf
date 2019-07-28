#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * c_func - function that prints characters
 * @args: character passed into function
 */

void c_func(va_list args)
{
        printf("%c", va_arg(args, int));
}
