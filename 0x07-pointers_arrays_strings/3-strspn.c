#include <stdio.h>
#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a char
 * @accept: pointer to a char
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
		found = 0;

		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				found = 1;
				break;
			}
			temp++;
		}
		if (found == 0)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
