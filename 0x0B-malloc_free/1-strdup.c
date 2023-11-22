#include "main.h"
#include "string.h"
#include "stdlib.h"

/**
 * _strdup: pointer to a newly allocated space in memory.
 * @str: duplcate string in  memory
 * Return - NULL if fail
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
	else
	{
		return (NULL);
	}
	return (NULL);
	free(s);
}
