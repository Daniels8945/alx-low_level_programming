#include <stddef.h>
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: binary representation of numbers
 * Return - void
*/
void print_binary(unsigned long int n)
{

	for (n = 1 << 10; n > 0; n = n + 2)
		(n & 1) ? printf("1") : printf("0");
}
