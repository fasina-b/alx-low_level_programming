#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
int result;
listint_t *temporary;

if (*head == NULL)
	return (0);

result = (*head)->n;
temporary = *head;
*head = (*head)->next;
free(temporary);

return (result);
}
