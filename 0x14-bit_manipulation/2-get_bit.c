#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int number.
 * @index: The index of the bit
 *
 * Return: value of index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	return ((n & mask) ? 1 : 0);
}
