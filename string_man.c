#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 *
 * Return: The amount of characters printed
 */

int print_reversed(va_list arg)
{
	char *str;
	int i = 0, c = 0;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		str = ")llun(";
		while(str[i])
		{
			_putchar(str[i]);
			i++;
			c++;
		}
	}
	else
	{
		while (str[i])
		{
			i++;
		}

		while (i >= 0)
		{
			_putchar(str[i]);
			c++;
			i--;
		}
	}
	return (c);
}

/**
 * rot13 - Converts string to rot13
 * @arg: string to convert
 *
 * Return: converted string
 */

int rot13(va_list arg)
{
	int i, j;
	char *str;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (str[i] == ch[j])
			{
				_putchar(c[j]);
				break;
			}
		}
		if (ch[j] == '\0')
			_putchar(str[i]);
	}
	return (i);

}
