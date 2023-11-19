#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i;
	int mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	for (i = 1; i < argc; i++)
	{
		mul = mul * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", mul);

	return (0);
}
