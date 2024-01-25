#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: pointer to a string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = '\0';
		}
		else if (s[i] == '-' || s[i] == '+')
		{
			s[i] = '\0';
		}
	}
	int a;
	a = (int)*s;
}
