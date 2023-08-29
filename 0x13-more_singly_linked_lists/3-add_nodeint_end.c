#include "lists.h"
/**
*add_nodeint_end - ......................................
*@head:..................................................
*@n:.....................................................
*Return:................................................
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	tmp = tmp->next;

	tmp->next = new_node;
	return (new_node);
}
