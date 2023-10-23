#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all the elements of a listint_t list.
 * @h: pointer to head of the linked list
 *
 * Return: The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		count++;
	}

	return (count);
}
