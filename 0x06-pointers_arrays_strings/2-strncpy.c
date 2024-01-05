#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: an integer
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
