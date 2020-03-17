#include "holberton.h"
/**
 * print_char - Printing character
 * @ap: argument pointer
 * Return: character
 */
int print_char(va_list ap)
{
	int x = va_arg(ap, int);

	_putchar(x);
	return (0);
}
