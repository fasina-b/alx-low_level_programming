#include "lists.h"

/**
 * dlistint_len - Returns linked dlistint_t list.
 * @h: Pointer 
 * Return: Number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
