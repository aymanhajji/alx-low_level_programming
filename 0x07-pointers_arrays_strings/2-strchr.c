#include <stdio.h>
#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: pointer to a char
 * @c: char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
