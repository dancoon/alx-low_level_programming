#include "search_algos.h"
/**
 * binary_search_recursive - searches for an element
 * @array: pointer to an element
 * @l: leftmost index
 * @r: rightmost index
 * @value: value to search for
 * Return: index or -1
 */
int binary_search_recursive(int *array, size_t l, size_t r, int value)
{
	size_t i, mid;

	if (r < l)
		return (-1);
	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i != r)
			printf(", ");

	}
	printf("\n");
	mid = l + (r - l) / 2;
	if (array[mid] == value && (mid == l || array[mid] != value))
		return (mid);
	else if (array[mid] >= value)
		return (binary_search_recursive(array, l, mid, value));
	return (binary_search_recursive(array, mid + 1, r, value));

}
/**
 * advanced_binary - searches for a value in a sorted array
 * @array: pointr to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{

	if (!array || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}
