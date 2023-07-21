#include <unistd.h>
#include"main.h"
/**
 * _putchar - write c
 *
 * Return: 0 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
