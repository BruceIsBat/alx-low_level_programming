#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if a given number is prime
 * @n: input number to check
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	/* Handle base cases */
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	/* Check if n is divisible by 2 or 3 */
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	/* Check if n is divisible by any number from 5 to sqrt(n) */

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}

	return (1);
}
