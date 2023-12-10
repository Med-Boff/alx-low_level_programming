#include <stdio.h>

/**
 * b_main - prints string befor main execution
 *
 */


void before_main(void) __attribute__((constructor));

void b_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
