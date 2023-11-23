#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concat two strings.
 * @s1: first string
 * @s2: second stringi
 * Return: pointer to newly created memory, which
 * contains the content of s1, follwed by the contents
 * of s2, and NULL terminated. NULL or failure
*/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *result;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[len] = '\0';
	return (result);
}
