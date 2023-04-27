#include "lists.h"
#include <stdlib.h>

/**
  * add_node: Write a function that adds a new node at the beginning of a list_t list.
  * @head: double pointer to the lists_t list
  *@str: a new string to add to the node
  *
  *Return: the address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	unsigned int len = 0;
	while (str[len]);
	len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;

	new->next = *head;

	(*head) = new;

	return (*head);


}
