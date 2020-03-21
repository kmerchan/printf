#include "holberton.h"

/**
 * print_octal - prints octal value of integers
 *
 * @ap: argument pointer to next argument, interger to be printed
 *
 * Return: character count from this function
 */

int print_octal(va_list ap)
{
	int digits = 0, save_digits = 0;
	unsigned long octal = 0;
	unsigned int n = va_arg(ap, int);

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	while (n > 0)
	{
		digits++;
		octal += n % 8;
		n /= 8;
		octal *= 10;
	}
	octal /= 10;
	save_digits = digits;
	for (; digits > 0; digits--)
	{
		_putchar((octal % 10) + '0');
		octal /= 10;
	}
	return ((save_digits) - 1);
}
