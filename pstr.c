#include "holberton.h"
#include <stdio.h>
/**
 * print_string - Printing string
 * @ap: argument point
 * Return: string
 */
int print_string(va_list ap)
{
	char *x = va_arg(ap, char*);
	int y, len = string_length(x);

	for (y = 0; y < len ; y++)
		_putchar(x[y]);
	return (len - 1);
}
