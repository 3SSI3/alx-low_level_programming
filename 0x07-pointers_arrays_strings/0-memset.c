#include "main.h"
/**
 * _memset - fills first n bytes with constant byte b.
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the poiner to dest s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	       s[i] = b;
	}
	return (s);
}
