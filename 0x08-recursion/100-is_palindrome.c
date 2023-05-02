#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if @s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);

	if (*s != *(s + len - 1))
		return (0);

	return (is_palindrome_helper(s + 1, len - 2));
}

/**
 * is_palindrome_helper - Recursive helper function for is_palindrome
 * @s: The string to check
 * @len: The length of the string, excluding the first and last characters
 *
 * Return: 1 if @s is a palindrome, otherwise 0
 */
int is_palindrome_helper(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s != *(s + len - 1))
		return (0);

	return (is_palindrome_helper(s + 1, len - 2));
}
