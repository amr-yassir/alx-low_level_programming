#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array of elements
 * @size: size of the array
 * @cmp: compare function
 *
 * Return: i
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
