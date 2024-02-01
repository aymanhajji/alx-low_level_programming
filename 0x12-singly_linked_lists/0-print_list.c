#include "lists.h"

/**
 * print_list - prints all elements of a list_t
 * @h: pointer to the head of the list that we gonna print
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count;

	node_count = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str != NULL) ? h->str : "(nil)");
		h = h->next;
		node_count++;
	}
	return (node_count);
}
