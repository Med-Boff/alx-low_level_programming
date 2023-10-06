#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
/**
 * main - fonction that prints its name
 *@argc: variable contains the number of arguments passed to the fonction
 * @argv: an array storing the arguments
 * @cwd: contains the path to the program
 *
 * Return: always 0
 */

int main(int argc, const char *argv[])
{
	char cwd[PATH_MAX];

	if (argc)
	{
		if (getcwd(cwd, sizeof(cwd)) != NULL)
		{
			printf("%s/%s\n", cwd, argv[0]);
		}
	}
	return (0);
}
