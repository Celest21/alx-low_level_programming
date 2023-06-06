/*Including the "lists.h" header file*/
#include "lists.h"

/**
  * print_listint - prints the elements of a linked list
  * @h: linked list of type listint_t
  *
  * Return: the number of nodes
  */

size_t print_listint(const listint_t *h)
{
	/*the variable used to store no. of.nodes*/
	size_t n_nodes = 0;

	while (h)
	{
		/*prints value of current node*/
		printf("%d\n", h->n);
		/*adds to the no of nodes*/
		n_nodes++;
		/*moves to the next node*/
		h = h->next;
	}

	/*return the total no of nodes*/
	return (n_nodes);
}
