#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: 0
 */
int main(void)
{
	char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hex[i]);
		if (i == 15)
		{
			putchar('\n');
		}
	}
	return (0);
}
