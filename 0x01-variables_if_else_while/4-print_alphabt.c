#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
*/

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'e' or c == 'q')
		{
			break
		}
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
