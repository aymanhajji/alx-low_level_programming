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
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (i = 0 ; i <= len ; i++)
	{
		_putchar(s[len - i]);
	}
	_putchar('\n');
}
