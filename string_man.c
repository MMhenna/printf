#include "holberton.h"

/**
 * print_reversed - Calls a function to reverse and print a string
 * @arg: Argument passed to the function
 *
 * Return: The amount of characters printed
 */

int print_reversed(va_list arg)
{
	int len;
	char *str, *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);

	ptr = rev_string(str);

	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putchar(ptr[len]);

	return (len);
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
