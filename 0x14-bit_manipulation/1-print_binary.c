#include <stddef.h>
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: binary representation of numbers
 * Return - void
*/
void print_binary(unsigned long int n)
{
	int i;

	for (i = 1 << 10; i > 0; i = i + 2)
		(n & i) ? printf("1") : printf("0");
	printf("\n");
}
