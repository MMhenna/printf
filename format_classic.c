#include "holberton.h"

/**
 * print_char - Prints character.
 * @list: list of arguments.
 *
 * Return: The amount of characters printed.
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Prints a string.
 * @list: list of arguments.
 *
 * Return: The amount of characters printed.
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - Prints a percent symbol.
 * @list: list of arguments.
 *
 * Return: The amount of characters printed.
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_integer - Prints an integer.
 * @list: list of arguments.
 *
 * Return: The amount of characters printed.
 */

int print_integer(va_list list)
{
	return (print_number(list));
}

/**
 * unsigned_integer - Prints Unsigned integers.
 * @list: List of argumets.
 *
 * Return: The amount of characters printed.
 */

int unsigned_integer(va_list list)
{
	return (print_number(list));
}
