#include "search_algos.h"
/**
 * jump_search - uses jump search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block, jump, i;

	if (!array || size == 0)
		return (-1);

	block = sqrt(size);
	i = 0;
	jump = 0;
	while (array[jump] < value && jump < size)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += block;
		if (jump > size - 1)
			return (-1);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i, jump);
	while (i <= jump && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
	}
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	return (array[i] == value ? (int)i : -1);
}
