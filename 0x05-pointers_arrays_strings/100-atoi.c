#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: input parameter
 * Return: Always 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign = -sign;
		}
		else if (*s >= '0' && *s <= '9')
		{
			int result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
		{
			break;
		}
		s++;
	}
	return (int (result) * sign);
}
