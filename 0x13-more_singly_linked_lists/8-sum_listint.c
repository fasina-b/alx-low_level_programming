#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data in the list, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
