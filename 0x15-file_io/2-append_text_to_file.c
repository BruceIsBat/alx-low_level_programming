#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * append_text_to_file - append a file
 * @filename: name of file to append to
 * @text_content: content of the file
 *
 * Return: success, -1 or 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fc;
	size_t text_len;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);
	fc = open(filename, O_WRONLY | O_APPEND);
	if (fc == -1)
		return (-1);
	text_len = strlen(text_content);
	bytes_w = write(fc, text_content, text_len);
	if (bytes_w == -1)
	{
		close(fc);
		return (-1);
	}
	close(fc);

	return (-1);
}
