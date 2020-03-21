#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * print_hexidecimal - prints hexidecimal value of integers
 *
 * @ap: argument pointer to next argument, interger to be printed
 *
 * Return: character count from this function
 */

int print_hexidecimal(va_list ap)
{
	int i = 0, remain = 0, save_digits = 0;
	char *array = malloc(INT_MAX);
	unsigned int n = va_arg(ap, int);

	if (array == NULL)
	{
		return (0);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	while (n > 0)
	{
		remain = n % 16;
		if (remain > 9)
			array[i] = (remain - 10) + 'a';
		else
			array[i] = remain + '0';
		n /= 16;
		i++;
	}
	array[i] = '\0';
	save_digits = (i - 1);
	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(array[i]);
	}
	free(array);
	return (save_digits - 1);
}
