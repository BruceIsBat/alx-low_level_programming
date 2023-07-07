#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string 'b' that is not 0 or 1, or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int bit;

	if (b == NULL)
		return (0);
	for (bit = 0; b[bit] != '\0'; bit++)
	{
		if ((b[bit] != '0' && b[bit] != '1') | b == NULL)
			return (0);

		decimal = (decimal << 1) | (b[bit] - '0');
	}

	return (decimal);
}
