#include "holberton.h"
/**
 * print_char - Printing character
 * @final: pointer to final array
 * @i: current index
 * @c:character to print
 * Return: character
 */
int print_char(char *final, int i, int c)
{
	for (i = 0; i < c; i++)
	{
		_putchar(final[i]);
	}
	return (c);
}
