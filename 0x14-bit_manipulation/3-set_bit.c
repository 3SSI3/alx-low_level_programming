#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a give index.
 * @index: index
 * @n: pointer of an unsigned long int.
 *
 * Return: 1 if it worked, -1 if it didnt
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
