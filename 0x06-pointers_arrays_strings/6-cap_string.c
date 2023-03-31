#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the string to capitalize
 *
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n'
				|| s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
				|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
				|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
				|| s[i - 1] == '}')
			s[i] = s[i] >= 'a' && s[i] <= 'z' ? s[i] - 32 : s[i];
		else
			s[i] = s[i] >= 'A' && s[i] <= 'Z' ? s[i] + 32 : s[i];
	}
	return (s);
}
