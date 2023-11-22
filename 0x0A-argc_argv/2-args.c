#include <stdio.h>
/**
 * main - fonction prints args given to the program
 * @argc: var contains num of args
 * @argv: pointer to arr  contains args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
