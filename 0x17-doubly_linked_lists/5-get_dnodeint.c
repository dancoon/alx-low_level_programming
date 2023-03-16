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
	dlistint_t *current;
	unsigned int j;

	if (head == NULL)
		return (NULL);
	current = head;
	j = 0;
	while (current)
	{
		if (j == index)
			return (current);
		current = current->next;
		j++;
	}
	return (NULL);
}

