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
	int a = 6;
	int b = 6;

	int len;
    	int len2;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");

    	ui = (unsigned int)INT_MAX + 1024;
   	// addr = (void *)0x7ffe637541f0;
    	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);

	_printf("Length:[%d, %i]\n", INT_MAX, INT_MAX);
        printf("Length:[%d, %i]\n", INT_MAX, INT_MAX);

	_printf("Length:[%d, %i]\n", INT_MIN, INT_MIN);
        printf("Length:[%d, %i]\n", INT_MIN, INT_MIN);

    	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);

    	_printf("Unsigned:[%u]\n", ui);
    	printf("Unsigned:[%u]\n", ui);

	len = _printf("Percent:[%%]\n");
    	len2 = printf("Percent:[%%]\n");

    	_printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);

	_printf("%b\n", 98);

	_printf("Character:[%c]\n", 'H');
    	printf("Character:[%c]\n", 'H');

    	_printf("String:[%s]\n", "I am a string !");
    	printf("String:[%s]\n", "I am a string !");


	_printf("Negative:[%ii]\n", a + b);
        printf("Negative:[%ii]\n", a + b);

	return (0);
}
