#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: integer
 * @cmp: pointer to a function
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
