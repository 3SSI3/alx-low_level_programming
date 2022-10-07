#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: amount of bytes.
 * Return: a pointer to allocated memory
 * if malloc fails, status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
