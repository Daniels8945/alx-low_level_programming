#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list.
*
* @h: pointer to the array elements
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h->next)
	{
		printf(" ->%p", (void *)h->next);
		i++;
		h = h->next;
	}
	return (i);
}
