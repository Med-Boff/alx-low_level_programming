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
	int n1 = atoi(argv[1]); 

	int n2 = atoi(argv[2]);

	int n = n1 * n2;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", n);
	}
	return (0);
}
