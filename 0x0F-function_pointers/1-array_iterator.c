#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on every element of an array
 * @array: pointer to an array
 * @size: the size of the array
 * @action: pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0 ; (unsigned int)i < size ; i++)
		{
			(*action)(array[i]);
		}
	}
}
