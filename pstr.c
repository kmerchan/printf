#include "holberton.h"
/**
 * print_string - Printing string
 * @final: pointer to final array
 * @i: current index
 * @s: string to print
 * Return: string
 */
int print_string(char *final, int i, int *s)
{
	int count;

	for (count = 0; s[count]; count++)
	{
		for (i = 0; i < s; i++)
		{
			_putchar(final[i]);
		}
	}
	return (s);
}
