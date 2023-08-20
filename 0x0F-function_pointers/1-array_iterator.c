#include "function_pointers.h"

/**
 * array_interator - perform an action on every element of an array
 * @array: array of elements
 * @size: size of the array
 * @action: function to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
