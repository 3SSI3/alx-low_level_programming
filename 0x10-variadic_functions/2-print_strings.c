#include "veriadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separators
 * @n: number of arguments
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i <  n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);

		
}
