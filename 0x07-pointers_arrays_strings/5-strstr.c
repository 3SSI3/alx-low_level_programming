#include "main.h"
#include <stdio.h>

/**
 * _strstr - Finds the occurence of the substing needle in
 * the string haystack/
 * @haystack: entire string.
 * @needle: substring.
 * Return: a pointer to the beginning of the located substring,
 * Or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *b = needle;

	while (*a)
	{
		a = haystack;
		b = needle;
		while (*b)
		{
			if (*a == *b)
			{
				b++;
				a++;
			}
			else
				break;
		}
		if (*b == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
