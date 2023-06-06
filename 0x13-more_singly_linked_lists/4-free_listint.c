#include "lists.h"

/**
  * free_listint-frees linked list
  * @head: pointer to head of linked list to be freed
  *
  * Description: free memory occupied by linked list
  */

void free_listint(listint_t *head)
{
	/*declaring a temp pointer*/
	listint_t *temp;

		/*enters loop under head pointer is NULL*/
		while (head)
		{
			/*store the next pointer of recent node in a temp pointer*/
			temp = head->next;
			/*free memory allocated to recent node*/
			free(head);
			/*move head pointer to next node*/
			head = temp;
		}
}
