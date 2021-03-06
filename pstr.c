#include "holberton.h"
#include <stdio.h>
/**
 * print_string - Printing string
 * @ap: argument point
 * Return: string
 */
int print_string(va_list ap)
{
	char *x = va_arg(ap, char*), *nil_string = "(null)";
	int y, len, len2 = string_length(nil_string);

	if (x == NULL)
	{
		for (y = 0; nil_string[y]; y++)
			_putchar(nil_string[y]);
		return (len2 - 1);
	}
	len = string_length(x);
	for (y = 0; y < len ; y++)
		_putchar(x[y]);
	return (len - 1);
}
