#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: a pointer to a list
 *
 * Return: returns the umber of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
