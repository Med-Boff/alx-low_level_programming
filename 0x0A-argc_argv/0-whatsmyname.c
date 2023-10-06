#include <stdio.h>

/**
 * main - fonction that prints its name
 *@argc: variable contains the number of arguments passed to the fonction
 * @argv: an array storing the arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s \n", argv[0]);
	}
	return (0);
}
