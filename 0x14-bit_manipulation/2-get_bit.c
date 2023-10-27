#include "main.h"

/**
 * get_bits to return the value of given index.
 * @n: unsigned long int for search
 * @index: bit value to return
 * Return - value of bit index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)

	return ((n >> index) & 1);
	return (-1);
}
