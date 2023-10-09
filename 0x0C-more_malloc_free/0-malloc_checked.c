#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory
 * if malloc fails, malloc_checked termination status value is 98
 *
 * Return: a ponter to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;


	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
