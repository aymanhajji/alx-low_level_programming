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
	int i = 0;
	int len = _strlen(s);

	while (s[i] != '\0')
	{
		_putchar(s[len + 1 - i]);
		i++;
	}
	_putchar('\n');
}
