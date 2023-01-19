#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: first parameter
 * @size: second parameter
 * @cmp: third parameter
 * Return: int
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i, t;

    if (array != NULL && cmp != NULL)
    {   
    if (size > 0)
    {
        for (i = 0; i < size; i++)
        {
            t = cmp(array[i]);
            if (t)
                return (i);
        }
    }
    return (-1);
    }
}
