#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: pointer to the pointer to the head of the linked list.
 * @n: the data to added to the new.
 *
 * Return: The addres of the new elements, or NULL if it failled.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (!*head || !new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;

	}

	return (new);
}
