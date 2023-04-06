#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - raise to power
 *
 * @x: parameter
 * @y: parameter
 *
 * Return: answer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
