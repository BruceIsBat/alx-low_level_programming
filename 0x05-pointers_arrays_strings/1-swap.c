#include "main.h"

/**
 * swap_int  - check the code
 * @a:- swaps and stores for b
 * @b:- swaps and stores for a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
