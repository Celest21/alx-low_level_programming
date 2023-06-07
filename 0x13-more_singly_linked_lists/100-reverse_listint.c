#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	/*declaring pointers and initialising to null*/
	listint_t *prev = NULL;
	listint_t *next = NULL;

	/*a loop continues until head pointer is NULL*/
	while (*head)
	{
		/*doing a reversal of the list*/
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	/*making the reversed list the new starting point*/
	*head = prev;

	/*a pointer to first node which is the first head*/
	return (*head);
}

