/**
 * linear_search - searches for a value in an array of integers
 * through the LINEAR SEARCH ALGORITHM
 * 
 * @array:input array
 * @size:number fo elements in array
 * @value:value to search for
 * RETURN: -1, if value is not present in array or
 * if array is NULL
 */
int linear_search(int *array, size_t size, int value);
{
    int i;
    
    if (array == NULL)
	    return (-1);

    if (i = 0; i < (int)size; i++)
    {
	    printf("Value checked array[%ld] = [&d]\n", i, array[i]);
	    if (array[i] == value)
		    return(i);
    }
return(-1)

}
