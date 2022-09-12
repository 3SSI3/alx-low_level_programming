#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: using the main function
 * this program prints various type sizes
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long ll;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu bytes(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(f));
	prinf("Size of a float: %zu byte(s)\n", sizeof(f));
	return (0)
}
