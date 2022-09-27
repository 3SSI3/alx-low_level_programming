#include "main.h"

/**
 * _memcpy - copies byte from source to destination.
 * @dest: memory area destination.
 * @src: memory area source.
 * @n: bytes from memory area src.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	       *(dest + i) = *(src + i);

	return (dest);
}
