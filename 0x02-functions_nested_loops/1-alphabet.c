#include "main.h"
/**
 * main - print alphabets in lowercas
 *
 * Return: 0
 */
void  print_alphabet(void);
{
	int i;

	i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
