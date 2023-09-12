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
    open(filename, O_RDWR);
}
