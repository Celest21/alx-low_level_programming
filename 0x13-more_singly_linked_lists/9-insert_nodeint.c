#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/*assign variable*/
	unsigned int i;
	/*new node pointer*/
	listint_t *new;
	/*temp pointer to transverse list*/
	listint_t *temp = *head;

	/*memory allocation for new node*/
	new = malloc(sizeof(listint_t));
	/*check if allocation successful, return NULL*/
	if (!new || !head)
		return (NULL);

	/*assign given value to the new node*/
	new->n = n;
	/*set new nodes next field to NULL*/
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	/*transverse the list until requirment is reached*/
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
