#include "main.h"
#include "string.h"
#include "stdlib.h"

/**
 * _strdup - A pointer to a newly allocated space in memory.
 * @str: duplcate string in  memory
 * Return: pointer to duplicate
*/
char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
		return (NULL);
	s = (char *)malloc(strlen(str) + 1);
	strcpy(s, str);
	if (*str)
	{
		return (s);
	}
	free(s);
	return (0);
}
