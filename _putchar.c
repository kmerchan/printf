/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
