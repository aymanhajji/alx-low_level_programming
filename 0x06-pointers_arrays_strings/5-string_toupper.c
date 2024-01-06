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

	while (ptr[i] != '\0')
	{
		if (ptr[i] <= 'z' && ptr[i] >= 'a')
		{
			ptr[i] = ptr[i] + 32
		}
		i++;
	}

	return (src);
}
