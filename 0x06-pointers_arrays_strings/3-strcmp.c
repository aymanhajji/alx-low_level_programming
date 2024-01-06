#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return (i - j);
}
