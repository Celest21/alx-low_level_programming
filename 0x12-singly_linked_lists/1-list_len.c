#include <stdlib.h>
#include "lists.h"

/**
  *list_len - returns the total elements
  *in a linked list
  *@h: a pointer to list_t
  *
  *Return: the number of elements in h
  */
size_t list_len(const list_t *h)
{
	size_t ne = 0;

	while (h)
	{
		ne++;
		h = h->next;
	}
	return (ne);
}
