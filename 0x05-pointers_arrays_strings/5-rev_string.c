#include "main.h"

/**
 * rev_string - check the code
 * @s: defines tge string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l, z, h;
	char i;

	for (l = 0; s[l] != '\0'; l++;)
		z = 0;
	h = l / 2;

	while (h--)
	{
		i = s[l - z - 1];
		s[l - z - 1] = s[z];
		s[z] = i;
		z++;
	}
}
