#include "holberton.h"

/**
 * print_number - prints a number send to this function
 * @args: List of arguments
 *
 * Return: The number of arguments printed
 */

int print_number(va_list args)
{
	char c;
	int len = 0, res = 0, n;

	n = va_arg(args, int);
	if (n < 0)
	{
		len += _putchar('-');
		c = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		c = (char)((n % 10) + '0');
		n /= 10;
	}

	while (n > 0)
	{
		res = res * 10 + (n % 10);
		n /= 10;
	}
	while (res > 0)
	{
		len += _putchar((res % 10) + '0');
		res /= 10;
	}
	len += _putchar(c);
	return (len);
}

/**
 * print_unsgined_number - Prints an unsigned number
 * @args: unsigned integer to be printed
 *
 * Return: The amount of numbers printed
 */
int print_unsgined_number(va_list args)
{
	char c;
	unsigned int len = 0, res = 0, n;

	n = va_arg(args, int);
	c = (char)((n % 10) + '0');
	n /= 10;

	while (n > 0)
	{
		res = res * 10 + (n % 10);
		n /= 10;
	}
	while (res > 0)
	{
		len += _putchar((res % 10) + '0');
		res /= 10;
	}
	len += _putchar(c);
	return (len);

}
