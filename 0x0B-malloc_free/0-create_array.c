#include "main.h"
#include <stdlib.h>
/**
 * create array - creates an array of chars, and initializes it with specific char.
 * @size: size of array.
 * @c: character.
 * Return: pointer to the array, or  NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int u;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);
	
	for (u = 0; u < size; u++)
		cr[u] = c;

	return (cr);
}
