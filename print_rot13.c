#include "holberton.h"
#include <stdio.h>

/**
 * print_rot13 - prints string in rot13 encoding
 *
 * @ap: argument pointer to next argument, string to be printed
 *
 * Return: character count from this function
 */

int print_rot13(va_list ap)
{
	int i = 0, j = 0;
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *nil_string = "(null)";
	char *s = va_arg(ap, char *);

	if (s == NULL)
	{
		for (j = 0; nil_string[j]; j++)
			_putchar(nil_string[j]);
		return (-1);
	}
	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(rot[j]);
				break;
			}
		}
	}
	return (i - 1);
}
