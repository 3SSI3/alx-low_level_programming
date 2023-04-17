/**
 * binary_search - searches for a value in a sorted array of integers
 * through BINARY SEARCH ALGO
 * 
 * @array:pointer to the first elemnt to search in
 * @size:number of elements in array
 * @value:value to search for
 * RETRUN: -1, If value is not present in array/
 *         array = NULL
 * Array will be sorted in ascending order
 * Value won't appear more than once in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (i);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}
