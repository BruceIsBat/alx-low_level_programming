#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of", n);
	int last_digit = n % 10;

	if (last_digit > 5)
		printf("%d and is greater than 5\n", last_digit);
	else if (last_idigit == 0)
		printf("%d and is 0\n", last_digit);
	else
		printf("%d and is less than 6 and not 0\n", last_digit);
	return (0);
}
