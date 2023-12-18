#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0 ; i <= 25 ; i++)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
