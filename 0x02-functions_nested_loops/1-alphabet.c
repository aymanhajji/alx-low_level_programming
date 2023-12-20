#include <stdio.h>
#include <unistd.h>
#include "1-main.c"
/**
 * main - returns alphabet in lower case
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        putchar(alphabet[i]);
    }
    putchar('\n');
}

int main(void)
{
	print_alphabet(void);
	return (0);
}
