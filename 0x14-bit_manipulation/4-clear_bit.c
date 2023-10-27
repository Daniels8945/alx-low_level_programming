#include <stdio.h>
#include "main.h"

/**
 * clear_bit - set the value of a bit to 1 at a given index.
 * @index: index to change to one
 * @n: pointer to an uinsigned long to change
 * Return: 1 if it worked or -1 id an error occured
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(0UL << index);

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	*n &= mask;

	return (1);
}
