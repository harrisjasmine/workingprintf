#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c][%c]\n", 'H', 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]String:[%s]String:\n", "I am a string !", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[% ]\n");
	printf("Percent:[% ]\n");
	len = _printf("Percent:[%%%]\n");
	len2 = printf("Percent:[%%%]\n");
	_printf("Negative:[%i]\n", -762534);
	printf("Negative:[%i]\n", -762534);
	_printf("Negative:[%i]\n", 0);
        printf("Negative:[%i]\n", 0);
	_printf("Negative:[%d]\n", -762534);
        printf("Negative:[%d]\n", -762534);
	_printf("Negative:[%d]\n", 0);
        printf("Negative:[%d]\n", 0);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
