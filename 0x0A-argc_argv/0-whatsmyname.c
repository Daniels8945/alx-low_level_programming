#include <stdio.h>
#include <stdlib.h>

/*
 * main - print name follwed by new line.
 * argc: count
 * argv: count
 * Return - void
*/
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
