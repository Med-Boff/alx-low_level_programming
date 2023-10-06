#include <stdio.h>

/**
 * main - prints all argumrnts the programe recieves
 *@argv: stores the arguments
 *@argc: stores the num of arguments passed to this program
 *Return: always 0
 */

int main(int argc, char *argv[])
{
	int C;

	for (C = 0; C < argc; C++)
	{
		printf("%s\n", argv[C]);
	}
	return (0);
}
