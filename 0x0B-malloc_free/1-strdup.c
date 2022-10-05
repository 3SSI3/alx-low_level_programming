#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a newly allocated space in mem.
 * @str: string
 * Return: NULL if str=NULL, pointer of an array of chars.
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int a, b;

	if (str = NULL)
		return (NULL);

	for (a = 0; str[a] != '/0'; a++)
		;
	strout = (char *)malloc(sizeof(char) * (a + 1));

	if (strout == NULL)
		return (NULL);
	
	for  (b = 0; b <= a; b++)
		strout[j] = str[j];

	return (strout)
}
