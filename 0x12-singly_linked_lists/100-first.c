#include <stdio.h>

/**
 * b_main - prints string befor main execution
 *
 */


void b_main(void) __attribute__((constructor))
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
