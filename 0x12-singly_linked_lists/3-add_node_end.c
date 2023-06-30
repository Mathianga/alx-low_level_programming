#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a linked list
 * @head: double pointer
 * @str: string to be added in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr2;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr2 = malloc(sizeof(list_t));
	if (!ptr2)
		return (NULL);

	ptr2->str = strdup(str);
	ptr2->len = len;
	ptr2->next = NULL;

	if (*head == NULL)
	{
		*head = ptr2;
		return (ptr2);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr2;

	return (ptr2);
}
