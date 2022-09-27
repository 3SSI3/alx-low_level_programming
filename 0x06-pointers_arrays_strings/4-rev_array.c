#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Retrun: 0
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0; i < n--; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = a[j];
			a[j] = a[n];
			a[n] = temp;
		}
	}
}
