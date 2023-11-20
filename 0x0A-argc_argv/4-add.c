#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers.
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0
*/
int main(int argc, char **argv)
{
	int i, n;
	int add = 0;
	char *s;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &s, 10);

		if (*s)
		{
			printf("Error\n");
			return (1);
		}
		add += n;
	}
	printf("%d\n", add);

	return (0);
}
