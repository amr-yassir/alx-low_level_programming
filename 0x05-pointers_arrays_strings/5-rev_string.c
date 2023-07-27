#include "main.h"

/**
 * rev_string - print str in rev
 *
 * @s: input
*/

void rev_string(char *s)
{
	int l = 0;
	int i;
	char tmp;

	while (s[l])
		l++;
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
