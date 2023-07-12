#include "search_algos.h"
/**
 * min - returns the smallest value
 * @a: size_t
 * @b: size_t
 * Return: size_t
 */
size_t min(size_t a, size_t b)
{
	return (a < b ? a : b);
}
/**
 * binarysearch - search for an element
 * @array: pointer to an element
 * @l: leftmost index
 * @r: rightmost index
 * @value: value to search for
 * Return: index or -1
 */
int binarysearch(int *array, size_t l, size_t r, int value)
{
	size_t mid, i;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
/**
 * exponential_search - uses exponential search
 * @array: pointer to the first element in the array
 * @size: number of elements
 * @value: value to be search for
 * Return: index or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, l, r;

	if (!array)
		return (-1);
	if (array[0] != value)
	{
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			i *= 2;
		}
	}
	l = i / 2;
	r = min(i, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	return (binarysearch(array, l, r, value));
}
