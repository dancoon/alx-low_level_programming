#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - sums the nodes
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

