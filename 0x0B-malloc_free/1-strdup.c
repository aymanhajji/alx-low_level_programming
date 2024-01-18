#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to a char
 *
 * Return: char
 */
char *_strdup(char *str)
{
	int length;
	char *dup;
	int i;

	length = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	dup = malloc((length + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < length ; i++)
	{
		dup[i] = str[i];
	}
	dup[length] = '\0';

	return (dup);
}	
