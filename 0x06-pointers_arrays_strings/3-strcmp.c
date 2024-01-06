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
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
