#include "lists.h"

/**
  * free_listint2 - frees linked list
  * @head: pointer to list to be freed
  */
void free_listint2(listint_t **head)
{
	/*declare temp pointer*/
	listint_t *temp;

	/*check if head pointer in NULL*/
	if (head == NULL)
		/*return if NULL*/
		return;

	/*loop through list until head pointer is NULL*/
	while (*head)
	{
		/*store nect pointer of recent node*/
		temp = (*head)->next;
		/*free memory allocated for recent node*/
		free(*head);
		/*move the head pointer to next node*/
		*head = temp;
	}

	/*set head pointer to NULL to show an empty list*/
	*head = NULL;
}
