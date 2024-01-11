#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node
 * @head: Pointer
 * @n: Integer
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *read;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	read = *head;
	while (read->next != NULL)
		read = read->next;

	read->next = newNode;
	newNode->prev = read;

	return (newNode);
}
