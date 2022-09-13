#include <stdio.h>

/**
 *  main - Print lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
