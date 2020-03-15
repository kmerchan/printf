#ifndef HOLBERTON_H
#define HOLBERTON_H

/* declaration of _putchar function */
int _putchar(char c);

/* declaration of function to determine string length */
int string_length(char *s);

/* declaration of main printf function to print string and call formatting */
int _printf(const char *format, ...);

/* declaration of function to handle escape characters */
int escape(char *final, int i, int e);

/* declaration of function to determine formatting function needed (type int) */
int (*get_format(char *s))(char *, int, int);

/* declaration of function to determine formatting function needed (type str) */
int (*get_format(char *s))(char *, int, int);

/* declaration of function to format printing character */
int print_char(char *final, int i, int c);

/* declaration of function to format printing string */
int print_string(char *final, int i, char *s);

/* declaration of function to format printing integer */
int print_int(char *final, int i, int n);

#endif
