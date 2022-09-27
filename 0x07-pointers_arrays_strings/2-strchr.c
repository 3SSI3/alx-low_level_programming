#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: the string.
 * @c: the characher.
 * Return: a pointer to a character found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
