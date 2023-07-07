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
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	unsigned long int mask = 1UL << index;
	unsigned long int result = n & mask;

	return ((result > 0) ? 1 : 0);
}
