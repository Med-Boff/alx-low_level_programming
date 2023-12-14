
int root(int n, int s);

/**
 * _sqrt_recursion - function returning the natural square root of a number
 * @n: var num
 *
 * Return: the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n % 2 != 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (-1);
	}
	return (root(n, 1));
}

/**
 * root - fonctiont helper
 * @n: var 1
 * @s: var 2
 *
 * Return: root of a num
 */

int root(int n, int s)
{
	if (s * s == n)
	{
		return (s);
	}
	if (s * s > n)
	{
		return (-1);
	}

	return (root(n, s + 1));
}
