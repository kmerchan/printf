#include "holberton.h"

/**
 * print_binary - prints binary value of integers
 *
 * @ap: argument pointer to next argument, interger to be printed
 *
 * Return: character count from this function
 */

int print_binary(va_list ap)
{
	int digits = 0, save_digits = 0, binary = 0, num = 0;
	int n = va_arg(ap, int);

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	while (n > 0)
	{
		num = n;
		digits++;
		binary += n % 2;
		n /= 2;
		if ((num == 1) && (n == 1))
			break;
		binary *= 10;
	}
	binary /= 10;
	save_digits = digits;
	for (; digits > 0; digits--)
	{
		_putchar((binary % 10) + '0');
		binary /= 10;
	}
	return ((save_digits) - 1);
}
