#include <stdlib.h>
#include <string.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int num_words = 0, i = 0;

	for (i = 0; str[i] != '\0' && str[i + 1] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		num_words++;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
	}

	return num_words;
}

/**
 * allocate_words - Allocate memory for an array of words.
 * @num_words: The number of words to allocate.
 *
 * Return: A pointer to the allocated array.
 */
char **allocate_words(int num_words)
{
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return NULL;
	return words;
}

/**
 * split_string - Split a string into individual words.
 * @str: The string to split.
 * @words: The array to store the words.
 *
 * Return: 0 on success, -1 on failure.
 */
int split_string(char *str, char **words)
{
	int i = 0, word_index = 0, word_start = 0, word_length = 0;

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
			for (int j = 0; j < word_index; j++)
				free(words[j]);
			return -1;
		}
		strncpy(words[word_index], str + word_start, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}
	words[word_index] = NULL;
	return 0;
}

/**
 * strtow - Split a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings.
 */
char **strtow(char *str)
{
	int num_words = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return NULL;

	num_words = count_words(str);

	words = allocate_words(num_words);
	if (words == NULL)
		return NULL;

	if (split_string(str, words) == -1)
	{
		free(words);
		return NULL;
	}

	return words;
}

