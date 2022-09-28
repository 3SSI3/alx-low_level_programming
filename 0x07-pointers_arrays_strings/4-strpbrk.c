#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes..
 * @s: the string.
 * @accept: set of bytes.
 * Return: a pointer to the byte in s that mathes one of the bytes in accept
 * Or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
