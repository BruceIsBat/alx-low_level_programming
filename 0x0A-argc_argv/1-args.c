#include <stdio.h>
#include <stdlib.h>
/**
 * main - prototype
 *
 * @argc: argument count
 * @argv: argument vector
 * Return: EXIT_SUCCESS
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
