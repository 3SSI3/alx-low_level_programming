#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int a, b, c, ia;

	if (ac == 0)
		return (NULL);

	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);

		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}

	aout = malloc((a + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (b = a = ia = 0; ia < a; c++, ia++)
	{
		if (av[b][c] == '\0')
		{
			aout[ia] = '\n';
			b++;
			ia++;
			c = 0;
		}
		if (ia < a - 1)
			aout[ia] = av[b][c];
	}
	aout[ia] = '\0';

	return (aout);
}
