#include "holberton.h"
#include <stdio.h>

/**
 * print_reverse - Printing string in reverse
 * @ap: argument point
 * Return: string
 */
int print_reverse(va_list ap)
{
	char *x = va_arg(ap, char*), *nil_string = "(null)";
	int y, len = string_length(x), len2 = string_length(nil_string);

	if (x == NULL)
	{
		for (y = 0; nil_string[y]; y++)
			_putchar(nil_string[y]);
		return (len2 - 1);
	}
	for (y = (len - 1); y >= 0 ; y--)
		_putchar(x[y]);
	return (len - 1);
}
