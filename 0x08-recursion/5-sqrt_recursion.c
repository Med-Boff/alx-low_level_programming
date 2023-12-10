

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
	if (n % 2 == 0)
	{
		n = n / 2;
		if (n % 2 != 0)
		{
			return (n);
		}

	}
	return (_sqrt_recursion(n));
}
