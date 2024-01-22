#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - main file
 * @argc: int
 * @argv: array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *str;
	int i;

	(void)argc;
	(void)argv;
	str = (char *)malloc(sizeof(__FILE__) * sizeof(char));
	str = __FILE__;
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
