#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Pointer to the file
 * @text_content: String to add at the end of the file
 *
 * Return: On fail -1, otherwise 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w;
	int len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	w = write(file, text_content, len);
	if (w == -1)
	{
		close(file);
		return (-1);
	}

	close(file);

	return (1);
}
