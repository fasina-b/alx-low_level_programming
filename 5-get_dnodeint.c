#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: pointer
 * @index: index of the node to retrieve
 * Return: pointer to the nth node, or NULL 
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *read = head;
	unsigned int i;

	for (i = 0; read != NULL && i < index; i++)
		read = read->next;

	return (read);
}
