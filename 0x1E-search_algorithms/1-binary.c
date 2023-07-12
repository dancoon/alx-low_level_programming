#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointr to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r, mid, i;

	if (!array)
		return (-1);
	l = 0;
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
		}
		printf("\n");
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
