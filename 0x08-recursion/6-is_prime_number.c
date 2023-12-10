
/**
 * is_prime_number - fonction checks if num is prim
 * @n: num
 *
 * Return: 1 if its prime 0 if not
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

