#include <stdio.h>
#include <stdlib.h>
/**
 * main - prototypes
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: success
 */
int main(int argc, char **argv)
{
	unsigned long int x;
	int m, y;
	int cents[] = { 20, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]), y = 0;

	if (m < 0)
	{
		printf("0\n");
		return (1);
	}
	for (x = 0; m > 0 && x < sizeof(cents) / sizeof(cents[0]); x++)
	{
			y += m / cents[x];
			m %= cents[x];
	}
	printf("%d\n", y);

	return(0);
}
