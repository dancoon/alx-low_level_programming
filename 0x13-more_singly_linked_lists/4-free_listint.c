#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next = head->next;

	if (head == NULL)
		return;
	while (next != NULL)
	{
		free(head);
		head = next;
		next = next->next;
	}
	free(head);
}

