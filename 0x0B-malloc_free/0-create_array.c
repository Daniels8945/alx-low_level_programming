#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars.
 * @c: chars of  in array, to initialize
 * @size: the size of array
 * Return: pointer or NULL if fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
