#include <stdio.h>

/**
 * b_main - prints string befor main execution
 *
 * main - prints string
 * 
 * Return: 0
 */

void b_main(void);


int main(void)
{
	b_main();
	printf("A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

void b_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n")
}
