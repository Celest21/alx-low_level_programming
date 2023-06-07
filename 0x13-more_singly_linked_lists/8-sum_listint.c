#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	/*variable to store sum of data*/
	int sum_d = 0;
	/*temp pointer to transverse list*/
	listint_t *temp = head;

	while (temp)
	{
		/*add the value of recent node to the sum*/
		sum_d += temp->n;
		/*move on to the next node*/
		temp = temp->next;
	}

	/*return the sum*/
	return (sum_d);
}
