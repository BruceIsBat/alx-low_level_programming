#include "main.h"

/**
 * _sqrt_recursion - natural square root
 *
 * @n: parameter
 *
 * Return: anything
 */

int _sqrt_recursion(int n)
{
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
		return (_sqrt_helper(n, 1, n));
	}
}


/**
 * _sqrt_helper - Calculates the natural
 *
 * @n: The input number
 * @low: The lower limit
 * @high: The upper limit
 *
 * Return: 0
 */
int _sqrt_helper(int n, int low, int high)
{
	int mid;

	if (high < low)
	{
		return (-1);
	}
	mid = (low + high) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (_sqrt_helper(n, low, mid - 1));
	}
}
