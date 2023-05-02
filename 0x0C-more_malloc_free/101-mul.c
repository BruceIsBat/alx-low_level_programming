#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len1 = 0, len2 = 0;
	char *num1, *num2, *res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}


	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i]; i++)
	{
		if (num1[i] < '0' || num1[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len1++;
	}
	for (i = 0; num2[i]; i++)
	{
		if (num2[i] < '0' || num2[i] > '9')
		{
			printf("Error\n");
			return (98);
		}
		len2++;
	}


	res = calloc(len1 + len2 + 1, sizeof(char));
	if (!res)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			res[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
			res[i + j] += res[i + j + 1] / 10;
			res[i + j + 1] %= 10;
		}
	}

	for (i = 0; res[i] == 0 && i < len1 + len2 - 1; i++)
		;
	res += i;

	printf("%s\n", res);

	free(res - i);
	return (0);
}

