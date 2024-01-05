#include <stdio.h>
#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: the nuber of bytes that we will use from src
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int i = 0;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (original_dest);
}
