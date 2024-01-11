#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node 
 * @head: Pointer 
 * @n: Value
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
