#include <stdio.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings
 * @dest: pointer to the first string
 * @src: pointer to the second string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (original_dest);
}
