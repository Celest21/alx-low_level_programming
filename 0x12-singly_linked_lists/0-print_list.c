/*using the standard I/O to get input and output functionality*/
#include <stdio.h>
/*This is a custom header file to work with the linked lists*/
#include "lists.h"

/**
  * print_list - is used to print the elements in the list
  * eg. in this task theres two test elements hello world
  * @h: this is the pointer to the header file
  * eg. in this task the header is hello
  * if the string is null then it must print [0] nil
  * Return:the number of nodes (individual elements) in the list
  */
size_t print_list(const list_t *h)
{
	size_t occurrence = 0;

	if (h == NULL)
	{
		return (occurrence);
	}

	do {
		if (h->str != NULL)
		{
			printf("%s\n", h->str);
		} else
		{
			printf("[0] (nil)\n");
		}
		occurrence++;
		h = h->next;
	} while (h != NULL);

	return (occurrence);
}
