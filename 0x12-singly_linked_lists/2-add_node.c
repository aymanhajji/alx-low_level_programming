#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * *add_node - adds a new node at the beginning of a list
 * @head: pointer to a pointer to the head of a list
 * @str: pointer to a string
 *
 * Return: The adress of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
