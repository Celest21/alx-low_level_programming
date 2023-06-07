#include "lists.h"

/**
  * pop_listint - deletes the head node of linked list
  * @head: pointer to first element
  *
  * Return: deleted data from inside elements
  * 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	/*declare tempory variables*/

	/*temp pointer to store next node*/
	listint_t *temp;
	/*variable to store data of deleted node*/
	int dnode_data;

	/*check if list or head pointer is empty*/
	if (!head || !*head)
		/*if list is empty return 0*/
		return (0);

	/*store head node data*/

	/*get data*/
	dnode_data = (*head)->n;

	/*store next node in temp variable*/

	/*get next node*/
	temp = (*head)->next;

	/*free mem of head node*/
	free(*head);

	/*update head pointer, point to next node*/
	*head = temp;

	/*return deleted node data*/
	return (dnode_data);
}
