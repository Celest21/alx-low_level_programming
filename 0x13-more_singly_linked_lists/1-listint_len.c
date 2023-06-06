/*including the list.h header file*/
#include "lists.h"

/**
  * listint_len - no of elements in a linked list
  * @h: linked list of type listint_t
  *
  * Return: no of nodes
  */
size_t listint_len(const listint_t *h)
{
	/*variable used to store no of nodes*/
	size_t n_nodes = 0;

	while (h != NULL)
	{
		/*add to the no of nodes*/
		n_nodes++;
		/*move on to next node*/
		h = h->next;
	}

	/*return the total no of nodes in list*/
	return (n_nodes);
}
