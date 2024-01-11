#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees list
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *read;

	while (head != NULL)
	{
		read = head;
		head = head->next;
		free(read);
	}
}
