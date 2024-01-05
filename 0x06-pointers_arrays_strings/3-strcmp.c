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
	int valeur = 1;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			valeur = 0;
		}
		i++;
		j++;
	}
	if (s1[i] == '\0')
	{
		j++;
	}
	else if (s2[j] == '\0')
	{
		i++;
	}
	if (i == j)
	{
		return (valeur);
	}
	else if (i < j)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	return (valeur);
}
