#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: a pointer to a list
 *
 * Return: returns the umber of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int count;
	struct listint_t *link;

	count = 1;
	link = h;
	if (h == NULL)
	{
		printf("Error\n");
		return (count);
	}
	while (next != NULL)
	{
		count++;
		printf("%d\n", link->n);
		link = link->next;
	}
	return (count);
}
