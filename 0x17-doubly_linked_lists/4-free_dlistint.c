#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - add node at the beginning
 * @head: head
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *n;

	while (head)
	{
		n = head->next;
		free(head);
		head = n;
	}

}

