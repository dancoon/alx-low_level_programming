#include "lists.h"
/**
 * add_nodeint - adds a new node at beginning
 * @head: head of list
 * @n: data
 * Return: address of new node or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = (listint_t *) malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	node->next = *head;
	*head = node;

	return (node);
}

