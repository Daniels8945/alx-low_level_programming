#include <stdio.h>
#include "lists.h"

/*
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->len);
		h = h->next;
	}

	return (len);
}
