#include "holberton.h"

/**
 * print_int - formats printing for integer
 * @final: array holding final string to be printed with all formatting
 *
 * @i: integer count of index for array, starting from central printf func
 *
 * @n: input integer to be printed
 *
 * Return: new index count of final array after setting integer
 */

int print_int(char *final, int i, int n)
{
	int digits = 1;
	int num = n;
	int j = 0;

	/* if n is negative, put negative sign and change n to positive */
	if (n < 0)
	{
		final[i] = '-';
		i++;
		n = 0 - n;
		num = n;
	}
	else if (n == 0)
	{
		final[i] = '0';
		i++;
		return (i);
	}
	/* counts number of digits by increasing count and dividing by 10 */
	while ((num / 10) != 0)
	{
		digits++;
		num /= 10;
	}
	/* sets index to be last digit of number */
	i += (digits - 1);
	/* loops through number from last digit to largest digit, set in final*/
	for (j = (digits - 1); j >= 0; j--, i--)
	{
		final[i] = (n % 10) + '0';
		n /= 10;
	}
	/* i should now equal initial i of func, change to be past last digit*/
	return (i + digits + 1);
}
