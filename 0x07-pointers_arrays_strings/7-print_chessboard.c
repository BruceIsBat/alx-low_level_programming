#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_chessboard - prints a chessboard
 * @a: the chessboard to print
 *
 * Description: Prints the chessboard represented by a 2D array of characters
 **/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}
