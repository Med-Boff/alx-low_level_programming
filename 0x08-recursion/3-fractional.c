/**
 * factorial - fonction that returns the factorial of a given number
 * @n: input number
 * Return: returns -1 if n<0 and 1 if n=0 or factorial of given number
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
	else
	{
		return ((n * factorial(n - 1)));
	}
}
