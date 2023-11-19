#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return - error
*/
int main(int argc, char **argv)
{
	int i, mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", mul);

	return (0);
}
