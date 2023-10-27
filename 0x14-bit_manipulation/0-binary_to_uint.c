#include <stddef.h>

/**
 * binary_to_uint - convets a binary number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: converted number or 0 if theres one or more chars or NULL;
*/
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = result * 2 + (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (result);

}
