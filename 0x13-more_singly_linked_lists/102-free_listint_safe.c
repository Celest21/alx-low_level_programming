#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	/*declaring variables*/

	/*count no of freed nodes*/
	size_t len = 0;
	/*stores the difference*/
	int diff;
	/*temp poiinter*/
	listint_t *temp;

	/*check h pointer*/
	if (!h || !*h)
		return (0);

	/*loop begins to start process of freeing list*/
	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	/*no of nodes freed*/
	return (len);
}

