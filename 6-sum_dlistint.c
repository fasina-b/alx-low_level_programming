#include "lists.h"

/**
 * sum_dlistint - returns the sum
 * @head: pointer
 * Return: sum of all data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int added = 0;

	while (head != NULL)
	{
		added += head->n;
		head = head->next;
	}

	return (added);
}
