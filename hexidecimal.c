#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
/**
 * hexidecimal - prints hexidecimal value of integers
 *
 * @n: input non-printable character as integer
 *
 */

void hexidecimal(unsigned int n)
{
	int i = 0, remain = 0;
	char *array = malloc(INT_MAX);

	if (array == NULL)
		return;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		remain = n % 16;
		if (remain > 9)
			array[i] = (remain - 10) + 'A';
		else
			array[i] = remain + '0';
		n /= 16;
		i++;
	}
	if (i == 1)
		_putchar('0');
	array[i] = '\0';
	for (i = (i - 1); i >= 0; i--)
	{
		_putchar(array[i]);
	}
	free(array);
}
