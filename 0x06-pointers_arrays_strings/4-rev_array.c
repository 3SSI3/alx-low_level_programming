#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array.
 * @n: number of elements of the array.
 * Retrun: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;
	
	for (i = 0; i < n--; i++)
	{
		for (j = 1; j > 0; j--)
		{
			temp = a[i];
			a[i] = a[n];
			a[n] = temp;
		}
	}
}
