#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - creates an array of chars and initializes it
 * @size: unsigned int
 * @c: char
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}

	return (array);
}
