#include <stdio.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to a char
 * @b: char variable
 * @n: unsigned int
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; (unsigned int)i <= n ; i++)
	{
		s[i] = b;
	}

	return (s);
}
