#include "holberton.h"
#include <stdio.h>

/**
 * print_S - prints string with non-printable character as hexidecimal value
 *
 * @ap: argument pointer to next argument, string to be printed
 *
 * Return: character count from this function
 */

int print_S(va_list ap)
{
	int i = 0, j = 0, count = 0;
	char *nil_string = "(null)";
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		for (j = 0; nil_string[j]; j++)
			_putchar(nil_string[j]);
		return (-1);
	}
	for (i = 0; s[i]; i++, count++)
	{
		if (s[i] >= 32 && s[i] <= 126)
			_putchar(s[i]);
		else
		{
			_putchar('\\');
			_putchar('x');
			hexidecimal(s[i]);
			count += 3;
		}
	}
	return (count - 1);
}
