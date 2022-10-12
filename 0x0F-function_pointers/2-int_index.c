#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: input integer array.
 * @size: number of elements in the array 
 * @cmp: pointer to the function
 *
 * Return: index of the first element
 * when no return 0, -1 when no element matches
 * -1 if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
