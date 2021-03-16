#include "holberton.h"

/**
 * print_number - Print a number.
 * @n : Number to be printed.
 *
 * Return : The number of arguments printed.
 */

int print_number(va_list args)
{
	char c;
	int res = 0;
	int len = 0;
	int n = va_arg(args, int);

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

