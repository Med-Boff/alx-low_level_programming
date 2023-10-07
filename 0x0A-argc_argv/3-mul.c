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
	int R = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", R);
		return (0);
	}
	else
	{
		printf("Error");
	}
	return (1);
}
