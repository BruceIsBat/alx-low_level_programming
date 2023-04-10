#include <stdio.h>
#include <stdlib.h>
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
	char s;

	for (i = 1; i < argc; i++)
	{
		for (s = 'a'; s <= 'z'; s++)
			if (*argv[i] == s)
			{
				printf("Error\n");
				return (1);
			}
		x = x + atoi(argv[i]);
	}
	printf("%d\n", x);
	exit(EXIT_SUCCESS);
}
