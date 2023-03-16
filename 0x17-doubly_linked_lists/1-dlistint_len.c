#include "lists.h"
/**
 * dlistint_len - return length of a double linked list
 * @h: head of the list
 * Return: length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

