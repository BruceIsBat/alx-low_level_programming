/**
 * _strcmp - Compares two strings.
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 * Return: An integer less than, equal to, or greater than zero, if s1 is found
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
