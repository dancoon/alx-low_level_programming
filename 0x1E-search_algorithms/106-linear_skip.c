#include "search_algos.h"

/**
 * linear_skip - function that searches for an algorithm in a sorted
 *		singly linked list of integers using the Linear skip algorithm.
 * @list: ptr to the  head of the linked list to search.
 * @value: the value to search for.
 *
 * Return: a ptr to the first node where the value is located, or NULL
 *	if the value is not present or the head of the list is NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);
	node = jump = list;
	while (jump->next != NULL && jump->n < value)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
