#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabetMin[] = "abcdefghijklmnopqrstuvwxyz";
	char alphabetMax[] = "ABCDEFGHIJKLMNOPQESTUVWXYZ";
	int i;

	for (i = 0 ; i <= 25 ; i++)
	{
		putchar(alphabetMin[i]);
	}
	for (i = 0 ; i <= 25 ; i++)
	{
		putchar(alphabetMax[i]);
	}
	putchar('\n');
	return (0);
}
