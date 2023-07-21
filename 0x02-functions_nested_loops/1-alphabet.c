#include "main.h"

/**\
 * print_alphabet - print alpha
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		-putchar(ch);
	-putchar('\n');
}
