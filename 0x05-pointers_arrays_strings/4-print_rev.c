#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer of a string that we want to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = -1;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
}
