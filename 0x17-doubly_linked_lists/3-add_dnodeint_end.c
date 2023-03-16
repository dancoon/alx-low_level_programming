#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - add node at the beginning
 * @head: head
 * @n: value
 * Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	if (head == NULL)
		return (NULL);
	new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}

