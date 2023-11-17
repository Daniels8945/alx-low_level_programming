#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name, follwed by new line.
 * @argc: argument count
 * @argv: arguments
 * Return: void
*/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
