#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>

/**
 * struct get_format - matches format specifier with function pointer
 * @spec_char: specifying character
 *
 * @func: function pointer that matches specifier
 *
 */

typedef struct get_format
{
	char spec_char;
	int (*func)(va_list ap);
} get_format;


/* declaration of _putchar function */
int _putchar(char c);

/* declaration of function to determine string length */
int string_length(char *s);

/*declaration of function to determine string comparison */
int string_compare(const char *s1, char *s2);

/*declaration of function to format printing binary number */
int print_binary(va_list ap);

/* declaration of main printf function to print string and call formatting */
int _printf(const char *format, ...);

/* declaration of function to format printing character */
int print_char(va_list ap);

/* declaration of function to format printing string */
int print_string(va_list ap);

/* declaration of function to format printing integer */
int print_int(va_list ap);

/* declaration of function to format printing string in rot13 */
int print_rot13(va_list ap);

/* declaration of function to format printing string in reverse */
int print_reverse(va_list ap);

/* declaration of function to format printing percent character */
int print_perc(void);

/* declaration of function to print -1 if format is NULL */
void format_null(void);

#endif
