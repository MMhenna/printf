#include "holberton.h"

/**
 *rev_string - Reverse a string
 *@s: String to reverse
 *
 * Return: A pointer to a character
 **/

char *rev_string(char *s)
{
	int i = 0, j;
	char *bp, *ep, *res, ch;

	bp = s;
	ep = s;
	res = s;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		ep++;
	}

	for (j = 0; j < i / 2; j++)
	{
		ch = *ep;
		*ep = *bp;
		*bp = ch;

		bp++;
		ep--;
	}
	return (res);

}

/**
 * base_len - Calculates the length for an octal number.
 * @num: The number for which the length is being calculated.
 * @base: Base to be calculated by.
 *
 * Return: An integer representing the length of a number.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * write_string - sends characters to be written on standard output
 * @str: String to parse
 */
void write_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
