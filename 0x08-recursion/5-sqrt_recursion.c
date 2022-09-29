#include "main.h"
/**
 * _sqrt_recursion - returns the natural square roor of a number.
 * @n: input
 * Return: -1 if n does not have a natural square root,
 * else return natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (m == 1)
		return (1);
	return (power_operation(n, 2));
}
