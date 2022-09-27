#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int l;

	l = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++);
		if (s[i] == accept[j])
			l++;
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}
