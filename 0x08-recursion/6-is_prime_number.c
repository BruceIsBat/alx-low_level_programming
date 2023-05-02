#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if @n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime_helper(n, 2));
}


/**
 * is_prime_helper - Recursive helper function for is_prime_number
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if @n is prime, otherwise 0
 */
int is_prime_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (is_prime_helper(n, i + 1));
}
