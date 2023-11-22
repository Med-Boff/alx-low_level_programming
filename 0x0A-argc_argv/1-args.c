#include <stdio.h>

/**
 * main - fonction prints numbeer of arguments passed to the program
 * @argc: contains num of args
 * @argv: contains args
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
