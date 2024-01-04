#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int half;

	while (str[len] != '\0')
	{
		len++;
	}
	len--;

	if (len % 2 != 0)
	{
		half = len / 2;
		for (i = 0 ; str[i + half] != '\0' ; i++)
		{
			_putchar(str[i + half]);
		}
	}
	else
	{
		half = (len - 1) / 2;
		for (i = 0 ; str[i + half] != '\0' ; i++)
		{
			_putchar(str[i + half]);
		}
	}
	_putchar('\n');
}
