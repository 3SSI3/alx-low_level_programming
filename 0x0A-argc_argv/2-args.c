#include <stdio.h>
/**
 * main - prints all arguments it revceives.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	
	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
