#include <stdio.h>
#include <stdlib.h>
/**
 * main - prototype
 * @argc: parameter
 * @argv: parameter
 * Return: 0
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
