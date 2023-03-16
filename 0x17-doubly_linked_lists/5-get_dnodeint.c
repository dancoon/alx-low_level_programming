#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - get node at index
 * @head: head
 * @index: index
 * Return: address of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	while (j <= index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		j++;
	}
	return (head);
}

