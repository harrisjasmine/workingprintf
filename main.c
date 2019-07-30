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
		unsigned int ui;
		void *addr;

		len = _printf("Let's try to printf a simple sentence.\n");
		len2 = printf("Let's try to printf a simple sentence.\n");
		ui = (unsigned int)INT_MAX + 1024;
		addr = (void *)0x7ffe637541f0;
		_printf("Character:[%c]\n", 'H');
		printf("Character:[%c]\n", 'H');
		_printf("String:[%s]\n", "I am a string !");
		printf("String:[%s]\n", "I am a string !");
		_printf("Percent:[%%%]\n");
		printf("Percent:[%%%]\n");
		_printf("Percent:[%%%%%]\n");
		printf("Percent:[%%%%%]\n");
		_printf("mine: %%%%%%%%%%%\n");
		printf("theirs: %%%%%%%%%%%\n");
		len = _printf("binarymine: %b\n", 17);
		_printf("my len binary: %d\n", len);
		printf("their len binary: %d\n", len);
		_printf("%%s \n", "yolo");
		printf("%%s \n", "yolo");
		len = _printf("Percent:[%%]\n");
		len2 = printf("Percent:[%%]\n");
		_printf("Len:[%d]\n", len);
		printf("Len:[%d]\n", len2);
	return (0);
}
