#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t
 * @str: string for the new node
 *
 * Return: new element location, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = len;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newn;

	return (newn);
}
