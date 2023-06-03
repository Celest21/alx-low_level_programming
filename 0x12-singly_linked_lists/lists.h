#ifndef LISTS_H
#define LISTS_H

/**
  * struct list_s - this is a singly linked list
  * @str: used to store the string value and
  * is a pointer to a character
  * @len: the unsigned interger and stores the
  * lenght of the string
  * @next: it is a pointer, each element points to the next
  *
  * Description - a singly linked structure
  */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
int _putchar(char c);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
