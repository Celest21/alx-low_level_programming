#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_node - adds a new node to beggining of list
  * @head: a double pointer to list_t
  * @str: addition of a new string to node
  *
  * Return: location of new element,
  * if it fails NULL
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	unsigned int len = 0;

	while (str[len])
		len++;
	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);

	n_node->len = len;
	n_node->str = strdup(str);
	n_node->next = (*head);
	(*head) = n_node;

	return (*head);
}
