

/**
 * _pow_recursion - fonction returning num x to the power of num y
 * @x: first num
 * @y: second num
 *
 * Return: x to the power of y
 *
 */
int _pow_recursion(int x, int y)
{
	int sum = 0;

	if (y < 0)
	{
		return (-1);
	}

	while (y >= 0)
	{
		sum = sum + x * x;
		_pow_recursion(x, y - 1);
	}
	return (sum);
}
