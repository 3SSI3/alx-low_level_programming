#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++'
	}
	for (i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
