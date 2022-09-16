#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times \ should be printed
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
	}
	_putchar('\n');
}
