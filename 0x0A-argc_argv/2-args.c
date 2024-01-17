#include <stdio.h>
#include "main.h"
/**
 * main - the main function
 * @argc: integer
 * @argv: pointer to char
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	(void)argc;

	for (i = 0 ; argv[i] != NULL ; i++)
	{
		for (j = 0 ; argv[i][j] != '\0' ; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}

	return (0);

}
