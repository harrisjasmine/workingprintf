#include "holberton.h"
#include <stdio.h>

/**
 * rot_func - function that encodes a string using rot13
 *
 * @args: string passed from main
 *
 * Return: counter
 */

int rot_func(va_list args)
{
	int i, j;
	char str1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s;
	char *tmp;

	s = va_arg(args, char *);
	tmp = s;
	for (; *s != '\0'; s++)
		for (i = 0; i < 52; i++)
			if (*s == str1[i])
				*s = str2[i], i = 52;
	s = tmp;
	for (j = 0; s[j]; j++)
		_putchar(s[j]);
	return (j);
}
