#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - Converts a number from base 10 to binary.
 * @num: Number to be converted.
 *
 * Return: The length of the number printed
 */

int print_binary(va_list list)
{
	unsigned int num, len, i;
	char *str, *rev_str;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	len = base_len(num, 2);
	str = malloc(len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_string(rev_str);
	free(str);
	return (len);
}
