/**
 * string_compare - compares two strings
 * @s1: input string 1
 *
 * @s2: input string 2
 *
 * Return: integer
 */

int string_compare(const char *s1, char *s2)
{
	int i, r;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		r = 0;
	}
	else
	{
		r = s1[i] - s2[i];
	}
	return (r);
}
