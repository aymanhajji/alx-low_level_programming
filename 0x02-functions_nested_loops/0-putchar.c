#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char put[] = "\_putchar";
	int i = 0;

	for (i = 0 ; i < 7 ; i++)
	{
		putchar(put[i]);
	}
	putchar('\n');
	return (0);
}
