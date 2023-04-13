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
int binary_search(int *array, size_t size, int value);
{
    size_t j, rigt, left;

    if (array == NULL)
	    return (-1);

    for (left = 0, rigt = size - 1; rigt >= left;)
    {
	    printf("Searching in array: ");
	    for (i = left; i < rigt; i++)
		    printf("%d, ", array[i]);
	    printf("%d\n", array[i]);

	    i = left + (rigt - left) / 2;
	    if (array[i] == value)
		    return (i);
	    if (array[i] > value)
		    rigt = i - 1;
	    else
		    left = i + 1;
    }
    
    return (-1);
}
