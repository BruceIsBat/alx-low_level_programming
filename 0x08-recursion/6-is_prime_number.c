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
	int i;
	/* Handle base cases */
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	/* Check if n is divisible by 2 or 3 */
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	/* Check if n is divisible by any number from 5 to sqrt(n) */

	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}

	return (1);
}
