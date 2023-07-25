#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: print 1 to 100
 *
 * Return: 0 (success)
*/

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ( i % 3 == 0)
		{
			printf("Fizz ");            
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}