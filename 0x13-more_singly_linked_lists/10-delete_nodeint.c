#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	for (count = 0; count < index - 1 && prev != NULL; count++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	temp = prev->next;
	prev->next = temp->next;
	free(temp);

	return (1);
}
