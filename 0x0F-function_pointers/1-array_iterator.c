#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array
 * array: first parameter
 * size: second parameter
 * action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;
    
    if (array != NULL && action != NULL)
    {
        for (i = 0; i < size; i++)
            action(array[i]);
    }
}
    
