#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * perc_func - function that prints %
 * @args: character passed into function
 * Return: number of characters
 */

int perc_func(va_list args)
{
	_putchar('%');
	return (2);
}
