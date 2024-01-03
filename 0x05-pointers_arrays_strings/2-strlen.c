#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a string that we want to count
 *
 * Return: int
 */
int _strlen(char *s)
{
	char text[] = *s;
	int i = 0;

	while (text[i] != '\0')
	{
		i++;
	}
	return (i);
}
