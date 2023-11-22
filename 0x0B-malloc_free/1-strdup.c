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
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	s = (char *)malloc((sizeof(char) * len) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[len] = '\0';

	return (s);
}
