#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - gives the lenght of a string
 * @s: pointer to a string
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		1 + _strlen_recursion(s + 1);
	}
}
