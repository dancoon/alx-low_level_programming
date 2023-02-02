#include "lists.h"
/**
 * add_nodeint_end - adds a new node at end
 * @head: head
 * @n: data
 * Return: Address of node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
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
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;
	return (node);
}

