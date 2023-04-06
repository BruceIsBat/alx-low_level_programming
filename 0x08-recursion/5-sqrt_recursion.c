#include "main.h"
/**
 * _sqrt_recursion - square root
 *
 * @n: parameter
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int sq_root;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		sq_root = _sqrt_recursion(n / 2);
		if (sq_root == -1 || sq_root * sq_root > n)
		{
			return (_sqrt_recursion / n - 2);
		}
		else
		{
			return (sq_root);
		}
	}
}
