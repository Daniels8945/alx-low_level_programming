#include <stddef.h>
#include "lists.h"

/**
 * list_len - elements in linked list_t.
 * @h: name of the list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
		count++;
	{
		h = h->next;
	}
	return (count);
}
