#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int length1;
	int length2;
	char *result;
	int i;
	int j;

	length1 = 0;
	length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	result = malloc((length1 + length2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < length1 ; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0 ; j < length2 ; j++)
	{
		result[length1 + j] = s2[j];
	}

	result[length1 + length2] = '\0';

	return (result);
}
