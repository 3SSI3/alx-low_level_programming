#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the amount of the arguments
 *
 * Returns: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
