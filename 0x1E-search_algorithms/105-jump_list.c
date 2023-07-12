#include "search_algos.h"

/**
 * jump_list - function that earches for an algorithm in a sorted singly
 *	linked list of integers using the Jump search algorithm.
 * @list: ptr to the  head of the linked list to search.
 * @size: no. of nodes in the list.
 * @value: the value to search for.
 *
 * Return: a ptr to the first node where the value is located, or NULL
 *	if the value is not present or the head of the list is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	node = jump = list;
	while (jump->index + 1 < size && jump->n < value)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		   node->index, jump->index);

	while (node->index < jump->index && node->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		node = node->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
