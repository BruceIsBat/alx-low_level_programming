#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prototype
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: success
 */
int main(int argc, char **argv)
{
	int i, x = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < 0)
		{
			continue;
		}
		else if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else if (argc == 1)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			x = x + atoi(argv[i]);
		}
	}
	printf("%d\n", x);
	exit(EXIT_SUCCESS);
}
