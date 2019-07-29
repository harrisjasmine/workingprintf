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
	_printf("Character:[%c][%c]\n", 'H', 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]String:[%s]String:\n", "I am a string !", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	return (0);
}
