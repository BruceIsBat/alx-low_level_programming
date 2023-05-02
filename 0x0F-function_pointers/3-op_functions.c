#include "calc.h"

/**
 * add - Adds two integers
 * @num1: The first integer to add
 * @num2: The second integer to add
 *
 * Return: The sum of num1 and num2
 */
int add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * subtract - Subtracts two integers
 * @num1: The integer to subtract from
 * @num2: The integer to subtract
 *
 * Return: The result of subtracting num2 from num1
 */
int subtract(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * multiply - Multiplies two integers
 * @num1: The first integer to multiply
 * @num2: The second integer to multiply
 *
 * Return: The product of num1 and num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * divide - Divides two integers
 * @num1: The integer to divide
 * @num2: The integer to divide by
 *
 * Return: The result of dividing num1 by num2
 */
int divide(int num1, int num2)
{
	return (num1 / num2);
}

/**
 * modulo - Computes the remainder of dividing two integers
 * @num1: The integer to divide
 * @num2: The integer to divide by
 *
 * Return: The remainder of dividing num1 by num2
 */
int modulo(int num1, int num2)
{
	return (num1 % num2);
}
