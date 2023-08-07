#include "main.h"

/**
 * is_palindrome - checks if a text is palindrome
 *
 * @s: input
 *
 * Return: int
*/

int strlength(char *s);
int check_pal(char *s, int i, int len);
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, strlength(s)));
}

/**
 * strlength - determine the length of a string
 * 
 * @s: input
 *
 * Return: int
*/

int strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlength(s + 1));
}

/**
 * check_pal - checks if a string is palindrome
 *
 * @s: input
 * @i: input
 * @len: input
 *
 * Return: int
*/

int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
