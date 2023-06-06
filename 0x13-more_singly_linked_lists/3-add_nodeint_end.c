/*include lists.h in header file*/
#include "lists.h"

/**
  * add_nodeint_end - adds a node at the end of the list
  * @head: pointer to the first node in list
  * @n: data to be added to new node
  *
  * Return: pointer to new node, if it fails then NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/*declaring a pointer to the new node*/
	listint_t *new_node_end;
	/*declaring a temp pointer and initializing*/
	listint_t *temp = *head;

	/*allocating memory for the new node*/
	new_node_end = malloc(sizeof(listint_t));
	/*check if memory allocation failed*/
	if (!new_node_end)
		/*return NULL if it fails*/
		return (NULL);

	/*set data of new node to given number*/
	new_node_end->n = n;
	/*set the next pointer of new node to NULL*/
	new_node_end->next = NULL;

	/*check if list is empty*/
	if (*head == NULL)
	{
		/*make new node the first node, if it is empty*/
		*head = new_node_end;
		/*return pointer to the new node*/
		return (new_node_end);
	}

	/*transverse list until the last node*/
	while (temp->next)
		temp = temp->next;

	/*set pointer of last node to new node*/
	temp->next = new_node_end;

	/*return pointer to new node*/
	return (new_node_end);
}
