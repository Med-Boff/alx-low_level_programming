#include <stdio.h>

/**
 * main - the main function
 *
 * Return: prints numbers of base 10
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
