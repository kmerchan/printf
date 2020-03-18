#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * _printf - function to print string, formatting based on type of argument
 * @format: format string with text to copy and format specifiers to call args
 *
 * Return: int count of how many characters were printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, i2 = 0, count = 0, null_check = 0, null_seen = 0;
	get_format specifier[] = {
		{'c', print_char}, {'s', print_string}, {'r', print_reverse},
		{'d', print_int}, {'i', print_int}, {'R', print_rot13},
		{'\0', NULL} };

	if (format == NULL)
	{
		_putchar('-');
		_putchar(1);
		return (-1);
	}

	va_start(ap, format);
	for (i = 0; format[i]; i++, count++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else
		{
			for (i2 = 0; specifier[i2].spec_char != '\0'; i2++)
			{
				if (format[i + 1] == specifier[i2].spec_char)
				{
					null_check = specifier[i2].func(ap);
					if (null_check != -1)
						count += null_check;
					else
						null_seen = -1;
					i++;
					break;
				}
			}
		}
	}
	va_end(ap);
	if (null_seen == -1)
		return (-1);
	return (count);
}
