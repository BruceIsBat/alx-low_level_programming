#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fc;
	size_t text_len = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	fc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fc == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_len = strlen(text_content);
	}
	bytes_written = write(fc, text_content, text_len);
	if (bytes_written == -1)
	{
		close(fc);
		return (-1);
	}
	close(fc);
	return (1);
}
