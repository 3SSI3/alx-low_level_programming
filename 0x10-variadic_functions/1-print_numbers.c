#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers.
 * @n: number of integers.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;

	va_star(ptr, n);

	for (x = 0; x < n; x+++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator && x < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
