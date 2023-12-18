#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetMin[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0 ; i <= 50 ; i++)
	{
		putchar(alphabetMin[i]);
	}
	putchar('\n');
	return (0);
}
