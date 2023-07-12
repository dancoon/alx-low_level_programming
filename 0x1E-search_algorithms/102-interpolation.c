#include "search_algos.h"
/**
 * interpolation_search - uses interpolation serch algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: value to search for
 * Return: index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t h, l, pos;

	if (!array)
		return (-1);

	h = size - 1;
	l = 0;
	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
