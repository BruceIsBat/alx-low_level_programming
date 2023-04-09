#include <stdio.h>
#include <stdlib.h>
/**
 * main - prototype
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	int s;
	int x;
	int y;
	char *d = "Error";

	if (argc <= 2)
	{
		printf("%s\n", d);
		return (0);
	}
	else
	{
		x = atoi(argv[argc - 1]);
		y = atoi(argv[argc - 2]);
		s = x * y;
		printf("%d\n", s);
	}
	exit(EXIT_SUCCESS);
}
