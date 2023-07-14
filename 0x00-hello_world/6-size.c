#include <stdio.h>
/**
 * main - this is main function
 *
 * Return: 0 on success
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)\n);
	printf("size of an  int: %lu byte(s)", sizeof(int)\n);
	printf("size of a long int: %lu byte(s)", sizeof(long int)\n);
	printf("size of a long long int: %lu byte(s)", sizeof(long long int)\n);
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
