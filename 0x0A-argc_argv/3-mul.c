#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: integer
 * @argv: pointer to string
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int produit;
	int a;
	int b;

	a = toi(argv[1]);
	b = toi(argv[2]);
	produit = a * b;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	else
	{
		print_int(produit);
	}
	return (0);
}
