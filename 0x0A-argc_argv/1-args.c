#include <stdio.h>
#include "main.h"
/**
 * main - the main file
 * @argc: integer
 * @argv: pointer to a char
 *
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	_putchar('0' + argc);
	_putchar('\n');

	(void)*argv;

	return (0);
}
