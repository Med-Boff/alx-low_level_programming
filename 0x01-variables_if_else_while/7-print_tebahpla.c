#include <stdio.h>

/**
 * main - main the main function
 *
 * Return: prints lowercase alphabet
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
