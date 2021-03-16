#include "holberton.h"

/**
 * analyst - Print a formated string.
 * @format: A string containing all the desired characters.
 * @fs_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 *
 * Return: A total count of the characters printed.
 */

int analyst(const char *format, link_fs fs_list[], va_list arg_list)
{
	int i, j, printed_chars;
	int nbr_printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; fs_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == fs_list[j].sym[0])
				{
					printed_chars = fs_list[j].f(arg_list);
					if (printed_chars == -1)
						return (-1);
					nbr_printed_chars += printed_chars;
					break;
				}
			}
			if (fs_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					nbr_printed_chars += 2;
				}
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			nbr_printed_chars++;
		}
	}
	return (nbr_printed_chars);
}
