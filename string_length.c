/**
 * string_length - determines the length of a string
 * @s: input character string to determine length of
 *
 * Return: integer count of length
 */

int string_length(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		continue;
	return (i);
}
