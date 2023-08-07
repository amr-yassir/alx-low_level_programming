#include <unistd.h>

/**
 * _putchar - writes a char
 *
 * @c: input
 *
 * Return: 1 on success
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
