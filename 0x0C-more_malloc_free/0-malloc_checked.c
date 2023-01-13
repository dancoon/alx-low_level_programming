#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates a block of memory using malloc
 * @b: parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

