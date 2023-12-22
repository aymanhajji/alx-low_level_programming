#include <stdio.h>
#include "main.h"

void test_positive_or_negative()
{
	printf("Test 1 - ");
	positive_or_negative(10);

	printf("Test 2 - ");
	positive_or_negative(0);

	printf("Test 3 - ");
	positive_or_negative(-5);
}

int main()
{
	printf("Running Tests for positive_or_negative Function:\n");
	test_positive_or_negative();
	return (0);
}
