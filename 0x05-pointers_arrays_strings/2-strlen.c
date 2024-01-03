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
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
