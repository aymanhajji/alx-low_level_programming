#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @src : pointer to a string
 *
 * Return: string
 */
char *string_toupper(char *src)
{
	char *ptr = src;
	int i = 0;

	while (src[i] != '\0')
	{
		if (src[i] <= 'z' && src[i] >= 'a')
		{
			src[i] = src[i] + 32
		}
	}

	return (ptr);
}
