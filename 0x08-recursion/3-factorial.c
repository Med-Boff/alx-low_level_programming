#include <unistd.h>

/**
 * factorial - returns factorial of a number
 * @n: int variable that hold the number
 *
 * Return: factorial of a num
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
}
