#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t opened;
	ssize_t w;
	ssize_t t;

	opened = open(filename, O_RDONLY);
	if (opened == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	w = read(opened, buf, letters);
	t = write(STDOUT_FILENO, buf, w);

	free(buf);
	close(opened);
	return (t);
}
