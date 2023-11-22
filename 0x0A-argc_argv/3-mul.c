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
	int n = atoi(argv[1]) *  atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", n);
		return (1);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
