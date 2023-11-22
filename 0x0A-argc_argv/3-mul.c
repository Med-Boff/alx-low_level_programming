#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints num
 * @argc: num af args
 * @argv: point to arr of args
 *
 * Return: 0 if given 2 nums and 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n = atoi(argv[1]) *  atoi(argv[2]);

		printf("%d\n", n);
		return (0);
	}
	printf("Error\n");
	return (1);
}
