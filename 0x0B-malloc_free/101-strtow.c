#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	int j, num_words = 0, i = 0, word_index = 0, word_start = 0, word_length = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		num_words++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}

	words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		word_start = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		word_length = i - word_start;
		words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str + word_start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return (words);
}
