#include "lists.h"
/**
*pop_listint - .................................
*@head:.........................................
*Return:.........................................
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);
	node = *head;
	n = node->n;
	*head = node->next;
	free(node);
	return (n);
}
