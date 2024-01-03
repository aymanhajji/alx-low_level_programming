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
	int i;
	int length = _strlen(s);

	for (i = 0 ; i <= length ; i++)
	{
		_putchar(s[length - i]);
	}
}
