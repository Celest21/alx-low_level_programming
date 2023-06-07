#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: 1st node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node you searching for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*varible to track the current index*/
	unsigned int n  = 0;
	/*temporary pointer to transverse list*/
	listint_t *temp = head;

	/*loop until we reach end of list or required index*/
	while (temp && n < index)
	{
		/*move on to the next node*/
		temp = temp->next;
		/*add to the index counter*/
		n++;

	}

	/*if you get to the required node return it/return NULL*/
	return (temp ? temp : NULL);
}
