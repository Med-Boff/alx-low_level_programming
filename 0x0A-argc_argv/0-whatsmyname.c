#include <stdio.h>

/**
 * main - fonction that prints the name of the program
 * @argc: var caontains number of arguments passed to the program
 * @argv: pointer to array that contains this args
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
