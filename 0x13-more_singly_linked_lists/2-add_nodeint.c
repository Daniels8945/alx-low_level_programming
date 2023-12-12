#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - function that adds a new node at the
* beginning of a listint_t list.
* @head: beginning of the list
* @n: value to be added to the list
* Return: addres or NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	if (new_node == NULL)
		return (NULL);

	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->n = *head;
	*head = new_node;

	return (new_node);
}
