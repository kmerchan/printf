#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - function to print string, formatting based on type of argument
 * @format: format string with text to copy and format specifiers to call args
 *
 * Return: int count of how many characters were printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, i2 = 0, count = 0;
	get_format specifier[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_char},
		{'d', print_int}, {'i', print_int}, {'\0', NULL} };

	va_start(ap, format);
	for (i = 0; format[i]; i++, count++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			for (i2 = 0; specifier[i2].spec_char != '\0'; i2++)
			{
				if (format[i + 1] == specifier[i2].spec_char)
				{
					count += specifier[i2].func(ap);
					i++;
					break;
				}
			}
		}
	}
	va_end(ap);
	return (count);
}