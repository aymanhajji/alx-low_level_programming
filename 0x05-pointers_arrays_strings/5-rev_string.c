#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to a string that we want to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	char c;
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (i = 0 ; i <= len / 2 ; i++)
	{
		c = s[len - i];
		s[i] = c;
	}
}
