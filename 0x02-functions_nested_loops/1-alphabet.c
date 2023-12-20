#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * main - returns alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)                 /* prints alphabet */
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
}
