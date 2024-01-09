#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: pointer to a char
 * @src: pointer to a char
 * @n:  unsigned int
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0, (unsigned int)i < n, i++)
	{
		dest[i] = src[i]
	}

	return (dest);
}
