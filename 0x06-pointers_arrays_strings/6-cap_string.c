#include <stdio.h>
#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @src: pointer to a string
 *
 * Return: string
 */
char *cap_string(char *src)
{
	char *ptr = src;
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		while (src[i] == ' ' || src[i] == '\n' || src[i] == '\t')
		{
			i++;
		}
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	return (*ptr);
}
