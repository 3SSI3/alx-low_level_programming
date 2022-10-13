#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;

	va_start(ptr, n);
	for (x = 0; x < n; x+++)
	{
		printf("%d", va_arg(ptr, int));
		if (x < (n - 1) &&& separator != NULL)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
