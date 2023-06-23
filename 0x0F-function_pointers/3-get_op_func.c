#include "3-calc.h"
/**
 * calculate - Performs a mathematical operation on two integers
 * @num1: The first integer
 * @op: The operator to be applied (+, -, *, /, or %)
 * @num2: The second integer
 *
 * Return: The result of the operation
 */
int calculate(int num1, char op, int num2)
{
	int result;

	switch (op)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			result = 0;
	}

	return (result);
}
