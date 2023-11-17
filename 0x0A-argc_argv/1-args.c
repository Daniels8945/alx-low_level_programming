#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print the number of arguments passed.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for (i = 0; i < argc - 1; argc++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
