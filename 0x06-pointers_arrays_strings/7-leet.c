#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i,j;
	char *l = "AaEeOoTtLl";
	char *num_ = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if ( str[i] == l[j])
			{
				str[i] = num_[j];
				break;
			}
		}
	}
	return(str);
}
