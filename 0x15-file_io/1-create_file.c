#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Pointer to the file
 * @text_content: Pointer to a string
 *
 * Return: -1 if failed, 1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w, len = 0;

	if (!filename || !text_content)
		return (-1);
	while (*text_content)
	{
		len++;
		text_content++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (len)
		w = write(file, text_content, 1);
	if (w == -1)
		return (-1);

	close(file);

	return (1);
}
