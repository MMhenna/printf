#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - Print a formated string.
 * @format: A string containing all the desired characters.
 *
 * Return: A total count of the characters printed.
 */

int _printf(const char *format, ...)
{
	int nbr_printed_chars;

	link_fs fs_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"u", unsigned_integer},
		{"b", print_binary},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (!format)
		return (-1);

	va_start(arg_list, format);
	nbr_printed_chars = analyst(format, fs_list, arg_list);
	va_end(arg_list);
	return (nbr_printed_chars);
}

