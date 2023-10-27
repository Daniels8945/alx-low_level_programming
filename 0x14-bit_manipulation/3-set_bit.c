#include <stdio.h>
#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index.
 * @index: index to change to one
 * @n: pointer to an uinsigned long to change
 * Return: 1 if it worked or -1 id an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long  int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;

	return (1);
}
