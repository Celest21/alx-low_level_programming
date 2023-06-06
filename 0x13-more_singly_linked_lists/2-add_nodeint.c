/*including lists.h in the header file*/
#include "lists.h"

/**
  * add_nodeint - adding a new node at the start of the linked list
  * @head: pointer to the 1st node in the list
  * @n: data to put into the new node
  *
  * Return: pointer to new node, if it fails NULL
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/*declaring a pointer to a new node*/
	listint_t *new_node;

	/*allocation of memory for the new node*/
	new_node = malloc(sizeof(listint_t));
	/*memory allocation failed check*/
	if (!new_node)
		/*if it fails return NULL*/
		return (NULL);

	/*set the data of the new node to the given number*/
	new_node->n = n;
	/*set the next pointer of new node to the first node*/
	new_node->next = *head;

	/*set the head pointer to point to new node*/
	*head = new_node;

	/*return pointer to the new node*/
	return (new_node);
}
