#include <stdio.h>
#include "main.h"
/**
 * main - The main function
 * @argc: integer argument counter
 * @argv: pointer to an array of strings
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0 ; argv[0][i] != '\0' ; i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');

	return (0);
}
