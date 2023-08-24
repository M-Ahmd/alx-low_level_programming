#include<stdio.h>
#include "lists.h"
/**
*print_list - .......................
*@h:.................................
*Return:Always 0
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");

	h = h->next;
	n++;
	}
	return (n);
}
