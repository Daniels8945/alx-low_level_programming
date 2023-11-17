#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments received.
 * @argc: argument count
 * @argv: count
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i;

	printf("%d\n", argc - 1);
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
