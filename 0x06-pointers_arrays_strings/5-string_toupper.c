#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string,
 * to uppercase.
 * @j: pointer
 * Return: j
 */
char *string_toupper(char *j)
{
	int i;
	
	i = 0;
	while (j[i] != '\0')
	{
		if (j[i] >= 97) && (j[i] <= 122)
			j[i] = j[i] - 32;
		i++;
	}

	return (j);
}
