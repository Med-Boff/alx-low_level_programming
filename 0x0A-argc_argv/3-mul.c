#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication of two numbers
 * @argv: stores the arguments passed to this program
 * @argc: stores the number of arguments
 *
 * Return: 0 if successful 1 if not
 */

int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int R = n1 * n2;

	if (argc == 3)
	{
		printf("%d\n", R);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
