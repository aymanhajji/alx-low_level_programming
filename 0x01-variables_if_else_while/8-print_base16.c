#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexadecimal[] = "0123456789abcdef";
	int i;

	for (i = 0 ; i <= 15 ; i++)
	{
		putchar(hexadecimal[i]);
	}
	putchar('\n');

	return (0);
}
