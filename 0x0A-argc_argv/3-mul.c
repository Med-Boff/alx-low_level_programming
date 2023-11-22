#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints num
 * @argc: num af args
 * @argv: point to arr of args
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n = atoi(argv[1]) *  atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", n);
	}
	return (0);
}
